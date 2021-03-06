#ifndef _SPRD_KEYPAD_H_
#define _SPRD_KEYPAD_H_

#include "bits.h"
#include "sprd_reg.h"
#include "kpd_reg_v0.h"


#define KPD_ROW_MIN_NUM         2  /* when config keypad type, the value of */
#define KPD_COL_MIN_NUM         2  /* when config keypad type, the value of */

#define KPDCTL_ROW              (0x3f << 10)  /* enable bit for rows(row4 --- row7) */
#define KPDCTL_COL              (0x3f << 18)  /* enable bit for cols(col3 --- col4) */

#define KPD_CTRL                        (SPRD_KPD_PHYS + 0x0000)
#define KPD_INT_EN                      (SPRD_KPD_PHYS + 0x0004)
#define KPD_INT_RAW_STATUS              (SPRD_KPD_PHYS + 0x0008)
#define KPD_INT_MASK_STATUS             (SPRD_KPD_PHYS + 0x000C)

#define KPD_INT_CLR                     (SPRD_KPD_PHYS + 0x0010)
#define KPD_POLARITY                    (SPRD_KPD_PHYS + 0x0018)
#define KPD_DEBOUNCE_CNT                (SPRD_KPD_PHYS + 0x001C)
#define KPD_LONG_KEY_CNT                (SPRD_KPD_PHYS + 0x0020)

#define KPD_SLEEP_CNT                   (SPRD_KPD_PHYS + 0x0024)
#define KPD_CLK_DIV_CNT                 (SPRD_KPD_PHYS + 0x0028)
#define KPD_KEY_STATUS                  (SPRD_KPD_PHYS + 0x002C)
#define KPD_SLEEP_STATUS                (SPRD_KPD_PHYS + 0x0030)

#define REG_KPD_CTRL                    (*((volatile unsigned int *)(KPD_CTRL)))
#define REG_KPD_INT_EN                  (*((volatile unsigned int *)(KPD_INT_EN)))
#define REG_KPD_INT_RAW_STATUS          (*((volatile unsigned int *)(KPD_INT_RAW_STATUS)))
#define REG_KPD_INT_MASK_STATUS         (*((volatile unsigned int *)(KPD_INT_MASK_STATUS)))

#define REG_KPD_INT_CLR             (*((volatile unsigned int *)(KPD_INT_CLR)))
#define REG_KPD_POLARITY            (*((volatile unsigned int *)(KPD_POLARITY)))
#define REG_KPD_DEBOUNCE_CNT            (*((volatile unsigned int *)(KPD_DEBOUNCE_CNT)))
#define REG_KPD_LONG_KEY_CNT            (*((volatile unsigned int *)(KPD_LONG_KEY_CNT)))

#define REG_KPD_SLEEP_CNT           (*((volatile unsigned int *)(KPD_SLEEP_CNT)))
#define REG_KPD_CLK_DIV_CNT             (*((volatile unsigned int *)(KPD_CLK_DIV_CNT)))
#define REG_KPD_KEY_STATUS          (*((volatile unsigned int *)(KPD_KEY_STATUS)))
#define REG_KPD_SLEEP_STATUS            (*((volatile unsigned int *)(KPD_SLEEP_STATUS)))

//The corresponding bit of KPD_POLARITY register.
#define KPDPOLARITY_ROW                 (0x00FF)    // Internal row output xor with this 
// value to generate row output.
#define KPDPOLARITY_COL                 (0xFF00)    // Column input xor with this value to
#define KPDCLK0_CLK_DIV0                0xFFFF      //Clock dividor [15:0]
#define KPDCLK1_TIME_CNT                0xFFB0      //Time out counter value

#define CFG_ROW_POLARITY    (0x00FF & KPDPOLARITY_ROW)
#define CFG_COL_POLARITY    (0xFF00 & KPDPOLARITY_COL)
#define CFG_CLK_DIV         1

#define IRQ_KPD_INT 14

#define INT_DIS (INTC_BASE + 0xc)
#define REG_INT_DIS (*((volatile unsigned int *)(INT_DIS)))
#endif //_SPRD_KEYPAD_H_
