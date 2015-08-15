#if defined(CONFIG_ZS570ML) || defined(CONFIG_ZS550ML)
#define HW_ID_EVB		0x00000000
#define HW_ID_EVB2		0x00000001
#define HW_ID_SR1		0x00000002
#define HW_ID_ER1		0x00000003
#define HW_ID_ER2		0x00000004
#define HW_ID_pre_PR		0x00000005
#define HW_ID_PR		0x00000006
#define HW_ID_MP		0x00000007
#else
#define HW_ID_EVB		0xffffffff
#define HW_ID_PR		0x00000000
#define HW_ID_SR1		0x00000001
#define HW_ID_SR2		0x00000002
#define HW_ID_ER		0x00000003
#define HW_ID_pre_PR		0x00000004
#define HW_ID_ER1_1		0x00000005
#define HW_ID_ER1_2		0x00000006
#define HW_ID_MP		0x00000007
#define HW_ID_MP_SD		0x00000006
#endif


#define ZE550ML_LCD_ID_OTM_TM		3
#define ZE550ML_LCD_ID_OTM_CPT		0
#define ZE551ML_LCD_ID_NT_TM		3
#define ZE551ML_LCD_ID_NT_AUO		0
#define ZE551ML_LCD_ID_OTM_INX		2
#define ZX550ML_LCD_ID_NT_TM		3
#define ZX550ML_LCD_ID_OTM_INX		2
#define ZS550ML_LCD_ID_SYN_TM		3
#define ZS550ML_LCD_ID_SYN_BOE		2


#define PROJ_ID_ZE500ML		0x0000000e
#define PROJ_ID_ZE550ML		0x00000017
#define PROJ_ID_ZE551ML		0x0000001f
#define PROJ_ID_ZE551ML_CKD	0x0000001e
#define PROJ_ID_ZE551ML_ESE	0x0000000f
#define PROJ_ID_ZX550ML		0x0000001b
#define PROJ_ID_ZS571ML		0x0000001c
#define PROJ_ID_ZS570ML		0x0000001d
#define PROJ_ID_TAURUS_CES		0x00000008
#define PROJ_ID_ZS550ML		0x0000000b
#define PROJ_ID_ZS550ML_SEC	0x0000000a

#define  HARDWARE_ID_SHIFT      0
#define  HARDWARE_ID_MASK       0x07
#define  PROJ_ID_SHIFT          3
#define  PROJ_ID_MASK           (0x1f<<PROJ_ID_SHIFT)
#define  LCD_ID_SHIFT           8
#define  LCD_ID_MASK            (0x03<<LCD_ID_SHIFT)
#define  SIM_ID_SHIFT           10
#define  SIM_ID_MASK            (0x01<<SIM_ID_SHIFT)
#define  CAM_ID_SHIFT           11
#define  CAM_ID_MASK            (0x01<<CAM_ID_SHIFT)
#define  RF_SKU_ID_SHIFT        12
#define  RF_SKU_ID_MASK         (0x0f<<RF_SKU_ID_SHIFT)
