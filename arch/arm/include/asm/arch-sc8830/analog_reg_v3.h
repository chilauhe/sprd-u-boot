/******************************************************************************
 ** File Name:    analog_reg_v3.h                                        *
 ** Author:       Tim.Luo                                                     *
 ** DATE:         03/03/2010                                                  *
 ** Copyright:    2005 Spreatrum, Incoporated. All Rights Reserved.           *
 ** Description:                                                              *
 ******************************************************************************/
/******************************************************************************
 **                   Edit    History                                         *
 **---------------------------------------------------------------------------*
 ** DATE          NAME            DESCRIPTION                                 *
 ** 03/03/2010    Tim.Luo         Create.                                     *
 ** 05/07/2010    Mingwei.zhang   Modify it for SC8800G.                      *
 ******************************************************************************/

#ifndef _ANALOG_REG_V3_H_
#define _ANALOG_REG_V3_H_

#include "bits.h"
#include "sprd_reg_base.h"
/*----------------------------------------------------------------------------*
 **                         Dependencies                                      *
 **-------------------------------------------------------------------------- */

/**---------------------------------------------------------------------------*
 **                             Compiler Flag                                 *
 **---------------------------------------------------------------------------*/
#ifdef   __cplusplus
extern   "C"
{
#endif
/**----------------------------------------------------------------------------*
**                               Micro Define                                 **
**----------------------------------------------------------------------------*/
///
//Analog die register define
///
#define   ANA_APB_MOD_EN         (ANA_REG_BASE + 0x00)
#define   ANA_APB_CLK_EN         (ANA_REG_BASE + 0x04)
#define   ANA_APB_RTC_CLK_EN     (ANA_REG_BASE + 0x08)
#define   ANA_APB_ARM_RST    	 (ANA_REG_BASE + 0x0C)
#define   ANA_APB_DCDCPD_RTC_SET (ANA_REG_BASE + 0x10)
#define   ANA_APB_DCDCPD_RTC_CLR (ANA_REG_BASE + 0x14)
#define   ANA_APB_RTC_CTL        (ANA_REG_BASE + 0x18)
#define   ANA_APB_LDO_PD_CTL     (ANA_REG_BASE + 0x1C)
#define   ANA_APB_LDO_VC_CTL0    (ANA_REG_BASE + 0x20)
#define   ANA_APB_LDO_VC_CTL1    (ANA_REG_BASE + 0x24)
#define   ANA_APB_LDO_VC_CTL2    (ANA_REG_BASE + 0x28)
#define   ANA_APB_LDO_CAL_CTL0   (ANA_REG_BASE + 0x2C)
#define   ANA_APB_LDO_CAL_CTL1   (ANA_REG_BASE + 0x30)
#define   ANA_APB_LDO_CAL_CTL2   (ANA_REG_BASE + 0x34)
#define   ANA_APB_LDO_CAL_CTL3   (ANA_REG_BASE + 0x38)
#define   ANA_APB_LDO_CAL_CTL4   (ANA_REG_BASE + 0x3C)
#define   ANA_APB_LDO_CAL_CTL5   (ANA_REG_BASE + 0x40)
#define   ANA_APB_LDO_CAL_CTL6   (ANA_REG_BASE + 0x44)
#define   ANA_APB_AUXAD_CTL      (ANA_REG_BASE + 0x48)
#define   ANA_APB_DCDC_CTL0      (ANA_REG_BASE + 0x4C)
#define   ANA_APB_DCDC_CTL1      (ANA_REG_BASE + 0x50)
#define   ANA_APB_DCDC_CTL2      (ANA_REG_BASE + 0x54)
#define   ANA_APB_DCDC_CTL3      (ANA_REG_BASE + 0x58)
#define   ANA_APB_DCDC_CTL4      (ANA_REG_BASE + 0x5C)
#define   ANA_APB_DCDC_CTL5      (ANA_REG_BASE + 0x60)
#define   ANA_APB_DCDC_CTL6      (ANA_REG_BASE + 0x64)
#define   ANA_APB_DDR2_CTL       (ANA_REG_BASE + 0x68)
#define   ANA_APB_SLPWAIT_DCARM  (ANA_REG_BASE + 0x6C)
#define   ANA_APB_LDO_XTL_CTL    (ANA_REG_BASE + 0x70)
#define   ANA_APB_LDO_SLP_CTL0   (ANA_REG_BASE + 0x74)
#define   ANA_APB_LDO_SLP_CTL1   (ANA_REG_BASE + 0x78)
#define   ANA_APB_LDO_SLP_CTL2   (ANA_REG_BASE + 0x7C)
#define   ANA_APB_LDO_SLP_CTL3   (ANA_REG_BASE + 0x80)
#define   ANA_APB_LDO_SLP_CTL4   (ANA_REG_BASE + 0x84)
#define   ANA_APB_DCDC_SLP_CTL   (ANA_REG_BASE + 0x88)
#define   ANA_APB_XTL_WAIT_CTL   (ANA_REG_BASE + 0x8C)
#define   ANA_APB_FLASH_CTL      (ANA_REG_BASE + 0x90)
#define   ANA_APB_WHTLED_CTL0    (ANA_REG_BASE + 0x94)
#define   ANA_APB_WHTLED_CTL1    (ANA_REG_BASE + 0x98)
#define   ANA_APB_WHTLED_CTL2    (ANA_REG_BASE + 0x9C)
#define   ANA_APB_ANA_DRV_CTL    (ANA_REG_BASE + 0xA0)
#define   ANA_APB_VIBR_CTL0      (ANA_REG_BASE + 0xA4)
#define   ANA_APB_VIBR_CTL1      (ANA_REG_BASE + 0xA8)
#define   ANA_APB_VIBR_CTL2      (ANA_REG_BASE + 0xAC)
#define   ANA_APB_VIBR_PROT_VAL  (ANA_REG_BASE + 0xB0)
#define   ANA_APB_AUDIO_CTL      (ANA_REG_BASE + 0xB4)
#define   ANA_APB_CHGR_CTL0      (ANA_REG_BASE + 0xB8)
#define   ANA_APB_CHGR_CTL1      (ANA_REG_BASE + 0xBC)
#define   ANA_APB_CHGR_CTL2      (ANA_REG_BASE + 0xC0)
#define   ANA_APB_CHGR_STS       (ANA_REG_BASE + 0xC4)
#define   ANA_APB_MIXED_CTL      (ANA_REG_BASE + 0xC8)
#define   ANA_APB_PWR_XTL_EN0    (ANA_REG_BASE + 0xCC)
#define   ANA_APB_PWR_XTL_EN1    (ANA_REG_BASE + 0xD0)
#define   ANA_APB_PWR_XTL_EN2    (ANA_REG_BASE + 0xD4)
#define   ANA_APB_PWR_XTL_EN3    (ANA_REG_BASE + 0xD8)
#define   ANA_APB_PWR_XTL_EN4    (ANA_REG_BASE + 0xDC)
#define   ANA_APB_PWR_XTL_EN5    (ANA_REG_BASE + 0xE0)
#define   ANA_APB_ANA_STS        (ANA_REG_BASE + 0xE4)
#define   ANA_APB_POR_RST_MONTR  (ANA_REG_BASE + 0xE8)
#define   ANA_APB_WDG_RST_MONTR  (ANA_REG_BASE + 0xEC)
#define   ANA_APB_POR_PIN_RST_MONTR  (ANA_REG_BASE + 0xF0)
#define   ANA_APB_POR_SRC_FLAG   (ANA_REG_BASE + 0xF4)
#define   ANA_APB_POR_7S_CTL     (ANA_REG_BASE + 0xF8)
#define   ANA_APB_INT_DBG        (ANA_REG_BASE + 0xFC)
#define   ANA_APB_GPI_DBG        (ANA_REG_BASE + 0x100)
#define   ANA_APB_HWRST_RTC      (ANA_REG_BASE + 0x104)
#define   ANA_APB_CHIP_ID_LOW    (ANA_REG_BASE + 0x108)
#define   ANA_APB_CHIP_ID_HIG    (ANA_REG_BASE + 0x10C)
#define   ANA_APB_ARM_MF_REG     (ANA_REG_BASE + 0x110)
#define   ANA_APB_AFUSE_CTL      (ANA_REG_BASE + 0x114)
#define   ANA_APB_AFUSE_OUT0     (ANA_REG_BASE + 0x118)
#define   ANA_APB_AFUSE_OUT0     (ANA_REG_BASE + 0x11C)
#define   ANA_APB_AFUSE_OUT0     (ANA_REG_BASE + 0x120)
#define   ANA_APB_AFUSE_OUT0     (ANA_REG_BASE + 0x124)
#define   ANA_APB_ARCH_EN        (ANA_REG_BASE + 0x128)
#define   ANA_APB_MCU_WR_PROT_VAL    (ANA_REG_BASE + 0x12C)
#define   ANA_APB_DCDC_CORE     (ANA_REG_BASE + 0x160)
#define   ANA_APB_DCDC_ARM      (ANA_REG_BASE + 0x164)
#define   ANA_APB_DCDC_MEM      (ANA_REG_BASE + 0x168)
#define   ANA_APB_DCDC_GEN      (ANA_REG_BASE + 0x16C)
#define   ANA_APB_DCDC_WRF      (ANA_REG_BASE + 0x170)
#define   ANA_APB_DCDC_WPA      (ANA_REG_BASE + 0x174)
#define   ANA_APB_DCDC_WPA_DCM  (ANA_REG_BASE + 0x17C)

/* ANA_CHGR_CTL0 */
#define CHGR_CC_EN_BIT			BIT_0
#define CHGR_CC_EN_RST_BIT		BIT_1
#define CHGR_PWM_EN_BIT			BIT_10
#define CHGR_PWM_EN_RST_BIT		BIT_11
#define CHGR_RECHG_BIT          BIT_12

/* ANA_CHGR_CTL1*/

#define CHGR_SW_POINT_SHIFT		0
#define CHGR_SW_POINT_MSK		(0x1F << CHGR_SW_POINT_SHIFT)
#define CHGR_CHG_CUR_SHIFT		8
#define CHGR_CHG_CUR_MSK		(0xF << CHGR_CHG_CUR_SHIFT)
#define CHGR_PD_BIT				BIT_12
#define CHGR_CURVE_SHARP_BIT	BIT_13


/*
  the VIBRATOR_CTL0 register bit
*/
#define VIBR_STABLE_V_SHIFT 12
#define VIBR_STABLE_V_MSK   (0x0F << VIBR_STABLE_V_SHIFT)
#define VIBR_INIT_V_SHIFT   8
#define VIBR_INIT_V_MSK     (0x0F << VIBR_INIT_V_SHIFT)
#define VIBR_V_BP_SHIFT         4
#define VIBR_V_BP_MSK           (0x0F << VIBR_V_BP_SHIFT)
#define VIBR_PD_RST				BIT_3
#define VIBR_PD_SET					BIT_2
#define VIBR_BP_EN      BIT_1
#define VIBR_RTC_EN     BIT_0


#define   HWRST_STATUS_POWERON_MASK 	(0xf0)
#define   HWRST_STATUS_RECOVERY 		(0x20)
#define   HWRST_STATUS_FASTBOOT 		(0X30)
#define   HWRST_STATUS_NORMAL 			(0X40)
#define   HWRST_STATUS_ALARM 			(0X50)
#define   HWRST_STATUS_SLEEP 			(0X60)
#define   HWRST_STATUS_NORMAL2 			(0Xf0)

#ifdef   __cplusplus
}
#endif

#endif //_ANALOG_REG_V3_H_
