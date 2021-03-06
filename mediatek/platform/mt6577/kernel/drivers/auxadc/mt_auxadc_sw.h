#ifndef _MTK_ADC_SW_H
#define _MTK_ADC_SW_H

#include <mach/mt_gpt.h>
#include <mach/mt_clock_manager.h>
#include <mach/sync_write.h>

#define ADC_CHANNEL_MAX 16

#define MT_PDN_PERI_AUXADC MT65XX_PDN_PERI_AUXADC

extern int IMM_auxadc_GetOneChannelValue(int dwChannel, int data[4], int* rawdata);
extern int IMM_auxadc_GetOneChannelValue_Cali(int Channel, int*voltage);
extern void mt_auxadc_hal_init(void);
extern void mt_auxadc_hal_suspend(void);
extern void mt_auxadc_hal_resume(void);
extern int mt_auxadc_dump_register(char *buf);

#endif   /*_MTK_ADC_SW_H*/

