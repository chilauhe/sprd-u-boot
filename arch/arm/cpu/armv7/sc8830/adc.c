#include <common.h>
#include <asm/io.h>
#include <asm/arch/adc_reg_v3.h>
#include <asm/arch/adc_drvapi.h>
#include <asm/arch/adi_hal_internal.h>
#include <asm/arch/sprd_reg.h>

#define pr_err(fmt...) printf(fmt)
#define pr_warning(fmt...) printf(fmt)

void ADC_Init(void)
{
	ANA_REG_OR(ANA_REG_GLB_ARM_MODULE_EN, BIT_ANA_ADC_EN); //ADC enable
	ANA_REG_OR(ANA_REG_GLB_ARM_CLK_EN,    BIT_CLK_AUXAD_EN|BIT_CLK_AUXADC_EN); //enable auxad clock
	ANA_REG_OR(ANA_REG_GLB_XTL_WAIT_CTRL,    BIT_XTL_EN);	//enable clk
	__raw_writel(__raw_readl(REG_AON_APB_SINDRV_CTRL) |BIT_SINDRV_ENA, REG_AON_APB_SINDRV_CTRL);	//enable ddie to adie clk

	ANA_REG_OR(ADC_CTRL, ADC_EN_BIT);
	ANA_REG_OR(ADC_CTRL, ADC_MODE_12B);
}

void ADC_SetCs(adc_channel id)
{
    if(id >= ADC_MAX){
        pr_err("adc limits to 0~%d\n", ADC_MAX);
        return;
    }

    ANA_REG_MSK_OR(ADC_CS, id, ADC_CS_BIT_MSK);
}

void ADC_SetScale(bool scale)
{
    if(ADC_SCALE_1V2 == scale)
    {
        ANA_REG_AND(ADC_CS, ~ADC_SCALE_BIT);
    }
    else if(ADC_SCALE_3V == scale)
    {
        ANA_REG_OR(ADC_CS, ADC_SCALE_BIT);
    }
    else
    {
        pr_err("adc scale %d not support\n", scale);
    }
}

int32_t ADC_GetValue(adc_channel id, bool scale)
{
    uint32_t result;
    unsigned long irq_flag;
    uint32_t count;

    // clear int 
    ANA_REG_OR(ADC_INT_CLR, ADC_IRQ_CLR_BIT);

    //choose channel
    ADC_SetCs(id);

    //set ADC scale
    ADC_SetScale(scale);

    //run ADC soft channel
    ANA_REG_OR(ADC_CTRL, SW_CH_ON_BIT);

    count = 12;

    //wait adc complete
    while(!(ANA_REG_GET(ADC_INT_SRC)&ADC_IRQ_RAW_BIT) && count){
        udelay(50);
        count--;
    }
    if (count == 0) {
        pr_warning("WARNING: ADC_GetValue timeout....\n");
        return -1;
    }

    result = ANA_REG_GET(ADC_DAT) & ADC_DATA_MSK; // get adc value
    ANA_REG_AND(ADC_CTRL, ~SW_CH_ON_BIT); // turn off adc soft channel
    ADC_SetCs(TPC_CHANNEL_X);             // set tpc channel x back
    ANA_REG_OR(ADC_INT_CLR, ADC_IRQ_CLR_BIT); // clear irq of this time

    return result;
}
