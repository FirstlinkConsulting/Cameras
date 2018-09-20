//  7-1 General Status registers

// Mode Select for software standby
#define REG_MODE_SELECT                   (0x0100)
#define STREAMING                         (0x01 << 0)

// Software Reset
// Setting this register to 1 Resets
// sensor to its power up defaults
//
#define REG_SOFTWARE_RESET                (0x0103)
#define RESET                             (0x01 << 0)

// Fast Standby control
// 0: Frame completes before mode entry
// 1: Frame may be trucated before
//    mode entry
#define REG_FAST_STANDBY_CTRL             (0x0106)
#define FRAME_TRUNCATE                    (0x01 << 0)

// Sensor Chip ID coded on 2 Registers
// HI and LO
#define REG_CHIP_ID_HI                    (0x300A)
#define REG_CHIP_ID_LO                    (0x300B)

// Sensor Chip Revision Number
#define REG_CHIP_REVISION                 (0x302A)

// Image Orientation
// We can do:
// Horizontal Mirror
// Vertical Flip 
#define REG_IMAGE_ORIENTATION             (0x3820)
#define VERTICAL_FLIP                     (0x01 << 3)
#define HORIZONTAL_MIRROR                 (0x01 << 2)


// Frame Counter Value 0-255
#define REG_FRAME_COUNT                   (0x4A00)

// 7-2 SCCB Control Registers

#define REG_CCI_ADDRES_PGM_ID             (0x0107)
#define REG_SCCB                          (0x3031)

// 7-3 IO Control registers
#define REG_PCLK_HREF_VSYNC_OEN           (0x3001)
#define REG_IO_Y_OEN                      (0x3002)
#define REG_OUTPUT_DRIVE_CAP_CTRL         (0x3009)

// 7-4 Clock Configuration registers
#define REG_PRE_PLL_CLK_DIV               (0x3080)
#define REG_PLL_MULTIPLIER                (0x3081)
#define REG_VT_SYS_CLK_DIV                (0x3082)
#define REG_VT_PIXEL_CLK_DIV              (0x3083)
#define REG_SY_CLK_DIV                    (0x3103)
#define REG_SPI_CLK_DIV                   (0x301E)

// 7-5 Gain/Exposure Control registers
#define REG_EXPO_HI                       (0x3501)
#define REG_EXPO_LO                       (0x3502)
#define REG_GAIN_EXPO_CTRL                (0x3503)
#define REG_GAIN_HI                       (0x350A)
#define REG_GAIN_LO                       (0x350B)

// 7-6 Analog Control registers
// 0x3600 - 0x363F reserved

// 7-7 Sensor Control registers
// 0x3700 - 370C reserved

// 7-8 PSRAM Control registers
// 0x3780 - 0x3785 reserved

// 7-9 Frame timing registers
#define REG_H_CROP_START_HI              (0x3800)
#define REG_H_CROP_START_LO              (0x3801)

#define REG_V_CROP_START_HI              (0x3802)
#define REG_V_CROP_START_LO              (0x3803)

#define REG_H_CROP_END_HI                (0x3804)
#define REG_H_CROP_END_LO                (0x3805)

#define REG_V_CROP_END_HI                (0x3806)
#define REG_V_CROP_END_LO                (0x3807)

#define REG_H_OUTPUT_SIZE_HI             (0x3808)
#define REG_H_OUTPUT_SIZE_LO             (0x3809)

#define REG_V_OUTPUT_SIZE_HI             (0x380A)
#define REG_V_OUTPUT_SIZE_LO             (0x380B)

#define REG_TIMING_HTS_HI                (0x380C)
#define REG_TIMING_HTS_LO                (0x380D)

#define REG_TIMING_VTS_HI                (0x380E)
#define REG_TIMING_VTS_LO                (0x380F)

#define REG_H_WIN_OFF_HI                 (0x3810)
#define REG_H_WIN_OFF_LO                 (0x3811)

#define REG_V_WIN_OFF_HI                 (0x3812)
#define REG_V_WIN_OFF_LO                 (0x3813)

#define REG_VSYNC_CS_POINT_HI            (0x3814)
#define REG_VSYNC_CS_POINT_LO            (0x3815)

#define REG_VSYNC_START_ROW_HI           (0x3816)
#define REG_VSYNC_START_ROW_LO           (0x3817)

#define REG_VSYNC_END_ROW_HI             (0x3818)
#define REG_VSYNC_END_ROW_LO             (0x3819)

#define REG_HSYNC_FIRST_HI               (0x381A)
#define REG_HSYNC_FIRST_LO               (0x381B)

#define REG_REG1C_HI                    (0x381C)
#define REG_REG1C_LO                    (0x381D)

#define REG_FORMAT0                     (0x3820)
#define REG_FORMAT1                     (0x3821)

#define REG_CS_RST_FSIN_HI              (0x3822)
#define REG_CS_RST_FSIN_LO              (0x2823)

#define REG_R_RST_FSIN_HI               (0x3824)
#define REG_R_RST_FSIN_LO               (0x3825)

#define REG_FVTS_HI                     (0x3826)
#define REG_FVTS_LO                     (0x3827)

#define REG_LN_SYNC_POINT_HI            (0x3828)
#define REG_LN_SYNC_POINT_LO            (0x3828)


// 7-10 AEC Control
#define REG_AEC_CTRL0                   (0x3A00)

#define REG_MIX_EXPO                    (0x3A01)
#define REG_AEC_CTRL2                   (0x3A02)
#define REG_AEC_CTRL3                   (0x3A03)
#define REG_AEC_CTRL4                   (0x3A04)
#define REG_AEC_CTRL5                   (0x3A05)
#define REG_B50_STEP_HI                 (0x3A06)
#define REG_B50_STEP_LO                 (0x3A07)
#define REG_B60_STEP_HI                 (0x3A08)
#define REG_B60_STEP_LO                 (0x3A09)
#define REG_B50_EXPO_MAX_HI             (0x3A0A)
#define REG_B50_EXPO_MAX_LO             (0x3A0B)
#define REG_B60_EXPO_MAX_HI             (0x3A0C)
#define REG_B60_EXPO_MAX_LO             (0x3A0D)
#define REG_VTS_50_HI                   (0x3A0E)
#define REG_VTS_50_LO                   (0x3A0F)
#define REG_VTS_60_HI                   (0x3A10)
#define REG_VTS_60_LO                   (0x3A11)
#define REG_MAX_GAIN_HI                 (0x3A12)
#define REG_MAX_GAIN_LO                 (0x3A13)
#define REG_MIN_GAIN                    (0x3A14)
#define REG_AEC_CTRL15                  (0x3A15)
#define REG_AEC_CTRL16                  (0x3A16)
#define REG_AEC_CTRL17                  (0x3A17)
#define REG_AEC_CTRL18                  (0x3A18)
#define REG_AEC_CTRL19                  (0x3A19)
#define REG_AEC_CTRL1A                  (0x3A1A)

// Black Level Calibration

// 7-11 BLC Control Register
#define REG_BLC_CTRL00                  (0x4000)
#define REG_BLC_CTRL01                  (0x4001)
#define REG_BLK_LVL_TARGET_HI           (0x4002)
#define REG_BLK_LVL_TARGET_LO           (0x4003)
#define REG_HWIN_OFF_HI                 (0x4004)
#define REG_HWIN_OFF_LO                 (0x4005)
#define REG_HWIN_PAD_HI                 (0x4006)
#define REG_HWIN_PAD_LO                 (0x4007)
#define REG_BLC_CTRL08                  (0x4008)
#define REG_BLC_CTRL09                  (0x4009)
#define REG_OFF_LIM_TH_HI               (0x400A)
#define REG_OFF_LIM_TH_LO               (0x400B)
// 0x400C-0x400D reserved
#define REG_BLC_CTRL0E                  (0x400E)
#define REG_BLC_CTRL0F                  (0x400F)
#define REG_BLC_CTRL10                  (0x4010)
#define REG_BLC_CTRL11                  (0x4011)
#define REG_BLC_CTRL12                  (0x4012)
#define REG_BLC_CTRL13                  (0x4013)
#define REG_BLC_CTRL14                  (0x4014)
#define REG_BLC_CTRL15                  (0x4015)
#define REG_OFF_TRIG_TH_HI              (0x4016)
#define REG_OFF_TRIG_TH_LO              (0x4017)
// 0x4018-0x401f reserved
#define REG_OFF_CMP_TH000               (0x4020)
#define REG_OFF_CMP_K000                (0x4021)
#define REG_OFF_CMP_TH001               (0x4022)
#define REG_OFF_CMP_K001                (0x4023)
#define REG_OFF_CMP_TH010               (0x4024)
#define REG_OFF_CMP_K010                (0x4025)
#define REG_OFF_CMP_TH011               (0x4026)
#define REG_OFF_CMP_K011                (0x4027)
#define REG_OFF_CMP_TH100               (0x4028)
#define REG_OFF_CMP_K100                (0x4029)
#define REG_OFF_CMP_TH101               (0x402A)
#define REG_OFF_CMP_K101                (0x402B)
#define REG_OFF_CMP_TH110               (0x402C)
#define REG_OFF_CMP_K110                (0x402D)
#define REG_OFF_CMP_TH111               (0x402E)
#define REG_OFF_CMP_K111                (0x402F)
#define REG_OFF_MAN000_HI               (0x4030)
#define REG_OFF_MAN000_LO               (0x4031)
#define REG_OFF_MAN001_HI               (0x4032)
#define REG_OFF_MAN001_LO               (0x4033)
#define REG_OFF_MAN010_HI               (0x4034)
#define REG_OFF_MAN010_LO               (0x4035)
#define REG_OFF_MAN011_HI               (0x4036)
#define REG_OFF_MAN011_LO               (0x4037)
#define REG_OFF_MAN100_HI               (0x4038)
#define REG_OFF_MAN100_LO               (0x4039)
#define REG_OFF_MAN101_HI               (0x403A)
#define REG_OFF_MAN101_LO               (0x403B)
#define REG_OFF_MAN110_HI               (0x403C)
#define REG_OFF_MAN110_LO               (0x403D)
#define REG_OFF_MAN111_HI               (0x403E)
#define REG_OFF_MAN111_LO               (0x403F)
#define REG_BLC_OFFSET000_HI            (0x4040)
#define REG_BLC_OFFSET000_LO            (0x4041)
#define REG_BLC_OFFSET001_HI            (0x4042)
#define REG_BLC_OFFSET001_LO            (0x4043)
#define REG_BLC_OFFSET010_HI            (0x4044)
#define REG_BLC_OFFSET010_LO            (0x4045)
#define REG_BLC_OFFSET011_HI            (0x4046)
#define REG_BLC_OFFSET011_LO            (0x4047)
#define REG_BLC_OFFSET100_HI            (0x4048)
#define REG_BLC_OFFSET100_LO            (0x4049)
#define REG_BLC_OFFSET101_HI            (0x404A)
#define REG_BLC_OFFSET101_LO            (0x404B)
#define REG_BLC_OFFSET110_HI            (0x404C)
#define REG_BLC_OFFSET110_LO            (0x404D)
#define REG_BLC_OFFSET111_HI            (0x404E)
#define REG_BLC_OFFSET111_LO            (0x404F)


// 7-12 Frame Control Register
#define REG_FC_CTRL1                    (0x4201)
#define REG_FC_CTRL2                    (0x4202)

// 7-13 Output Data Clipping Registers
#define REG_YMAX_HI                     (0x4300)
#define REG_YMAX_LO                     (0x4301)
#define REG_YMIN_HI                     (0x4302)
#define REG_YMIN_LO                     (0x4303)
#define REG_UVMAX_HI                    (0x4304)
#define REG_UVMAX_LO                    (0x4305)
#define REG_UVMIN_HI                    (0x4306)
#define REG_UVMIN_LO                    (0x4307)

// 7-14 Output Format Control Registers
#define REG_FMT_CTRL                    (0x4308)

// 7-15 DVP Control registers
// 0x4700 reserved
#define REG_VSYNC_WIDTH_LINE            (0x4701)
#define REG_VSYNC_WIDTH_PIXEL_HI        (0x4702)
#define REG_VSYNC_WIDTH_PIXEL_LO        (0x4703)
#define REG_VSYNC_MODE                  (0x4704)
#define REG_VSYNC_DELAY_HI_23           (0x4705)
#define REG_VSYNC_DELAY_HI_15           (0x4706)
#define REG_VSYNC_DELAY_LO              (0x4707)
#define REG_POLARITY_CTRL               (0x4708)

// 7-16 SPI Contro Registers
#define REG_CORE_REG1                   (0x4F01)
#define REG_CORE_REG2                   (0x4F01)

// 7-17 ISP Control registers
#define REG_ISP_CTRL00                  (0x5000)
#define REG_ISP_CTRL01                  (0x5001)
#define REG_ISP_CTRL02                  (0x5002)
// 0x5003 reserved
#define REG_ISP_CTRL04                  (0x5004)
#define REG_ISP_CTRL05                  (0x5005)
#define REG_ISP_CTRL06                  (0x5006)
#define REG_ISP_CTRL07                  (0x5007)
#define REG_ISP_CTRL08                  (0x5008)
#define REG_ISP_CTRL09                  (0x5009)
// 0x500A reserved
#define REG_ISP_CTRL0B                  (0x500B)

// 7-18 Test Pattern registers
#define REG_PRE_CTRL00                  (0x5080)


// Lens Correction ( LENC_CTRL)
// The lens correction (LENC) algorithm compensates
// for the illumination drop off in the corners due
// to the lens.
// Based on the radius of each pixel to the lens,
// the algorithm calculate a gain for each pixel
// and then corrects each pixel with the calculated
// to compensate for the light distribution due to
// the lens curvature

// 7-19 LENC Control Registers
#define REG_RED_X0_HI                   (0x5100)
#define REG_RED_X0_LO                   (0x5101)
#define REG_RED_Y0_HI                   (0x5102)
#define REG_RED_Y0_LO                   (0x5103)
#define REG_RED_A1                      (0x5104)
#define REG_RED_A2                      (0x5105)
#define REG_RED_B1                      (0x5106)
#define REG_RED_B2                      (0x5107)
#define REG_GRN_X0_HI                   (0x5108)
#define REG_GRN_X0_LO                   (0x5109)
#define REG_GRN_Y0_HI                   (0x510A)
#define REG_GRN_Y0_LO                   (0x510B)
#define REG_GRN_A1                      (0x510C)
#define REG_GRN_A2                      (0x510D)
#define REG_GRN_B1                      (0x510E)
#define REG_GRN_B2                      (0x510F)
#define REG_BLUE_X0_HI                  (0x5110)
#define REG_BLUE_X0_LO                  (0x5111)
#define REG_BLUE_Y0_HI                  (0x5112)
#define REG_BLUE_Y0_LO                  (0x5113)
#define REG_BLUE_A1                     (0x5114)
#define REG_BLUE_A2                     (0x5115)
#define REG_BLUE_B1                     (0x5116)
#define REG_BLUE_B2                     (0x5117)
#define REG_LENC_CTRL                   (0x5118)
#define REG_LENC_COEF_TH                (0x5119)
#define REG_LEN_GAIN_THRE1              (0x511A)
#define REG_LEN_GAIN_THRE2              (0x511B)
#define REG_COEFF_MAN                   (0x511C)

// 7-20 AWB Control Registers
#define REG_R_AWB_CTRL00                (0x5200)
#define REG_R_AWB_CTRL01                (0x5201)
#define REG_R_AWB_CTRL01                (0x5202)
#define REG_R_AWB_CTRL03                (0x5203)
#define REG_R_WIN_BL_X_HI               (0x5204)
#define REG_R_WIN_BL_X_LO               (0x5205)
#define REG_R_WIN_BL_Y_HI               (0x5206)
#define REG_R_WIN_BL_Y_LO               (0x5207)
#define REG_R_WIN_TR_X_HI               (0x5208)
#define REG_R_WIN_TR_X_LO               (0x5209)
#define REG_R_WIN_TR_Y_HI               (0x520A)
#define REG_R_WIN_TR_Y_LO               (0x520B)
#define REG_R_SKIN_DX_HI                (0x520C)
#define REG_R_SKIN_DX_LO                (0x520D)
#define REG_R_SKIN_DY_HI                (0x520E)
#define REG_R_SKIN_DY_LO                (0x520F)
#define REG_R_SKIN_RX                   (0x5210)
#define REG_R_SKIN_RY                   (0x5211)
#define REG_R_AWB_CTRL12                (0x5212)
#define REG_R_AWB_CTRL13                (0x5213)
#define REG_R_AWB_CTRL14                (0x5214)
#define REG_R_AWB_CTRL15                (0x5215)
#define REG_R_AWB_CTRL16                (0x5216)
#define REG_R_AWB_CTRL17                (0x5217)
#define REG_R_AWB_CTRL18                (0x5218)
#define REG_R_AWB_CTRL19                (0x5219)
#define REG_R_AWB_MAN_R_HI              (0x521A)
#define REG_R_AWB_MAN_R_LO              (0x521B)
#define REG_R_AWB_MAN_G_HI              (0x521C)
#define REG_R_AWB_MAN_G_LO              (0x521D)
#define REG_R_AWB_MAN_B_HI              (0x521E)
#define REG_R_AWB_MAN_B_LO              (0x521F)
#define REG_R_LOCAL_LIMIT_HI            (0x5220)
#define REG_R_LOCAL_LIMIT_LO            (0x5221)
#define REG_R_WP_LOCAL_LIMIT_HI         (0x5222)
#define REG_R_WP_LOCAL_LIMIT_LO         (0x5223)
#define REG_R_SENSOR_GAIN_TH_HI         (0x5224)
#define REG_R_SENSOR_GAIN_TH_LO         (0x5225)
#define REG_R_SENSOR_GAIN_TH2_HI        (0x5226)
#define REG_R_SENSOR_GAIN_TH2_LO        (0x5227)
#define REG_R_WIN_SX_HI                 (0x5228)
#define REG_R_WIN_SX_LO                 (0x5229)
#define REG_R_WIN_EX_HI                 (0x522A)
#define REG_R_WIN_EX_LO                 (0x522B)
#define REG_R_WIN_SY_HI                 (0x522C)
#define REG_R_WIN_SY_LO                 (0x522D)
#define REG_R_WIN_EY_HI                 (0x522E)
#define REG_R_WIN_EY_LO                 (0x522F)
#define REG_R_AWB_CTRL30                (0x5230)
#define REG_R_GAIN_O_HI                 (0x5238)
#define REG_R_GAIN_O_LO                 (0x5239)
#define REG_G_GAIN_O_HI                 (0x523A)
#define REG_G_GAIN_O_LO                 (0x523B)
#define REG_B_GAIN_O_HI                 (0x523C)
#define REG_B_GAIN_O_LO                 (0x523D)


// 7-21 GAMMA Control registers
#define REG_GAMMA_CTRL                  (0x5300)
#define REG_YST1                        (0x5301)
#define REG_YST2                        (0x5302)
#define REG_YST3                        (0x5303)
#define REG_YST4                        (0x5304)
#define REG_YST5                        (0x5305)
#define REG_YST6                        (0x5306)
#define REG_YST6                        (0x5307)
#define REG_YST8                        (0x5308)
#define REG_YST9                        (0x5309)
#define REG_YST10                       (0x530A)
#define REG_YST11                       (0x530B)
#define REG_YST12                       (0x530C)
#define REG_YST13                       (0x530D)
#define REG_YST14                       (0x530E)
#define REG_YST15                       (0x530F)
#define REG_YSLP15                      (0x5310)



// 7-22 DPC Control registers
#define REG_DPC_CTRL00                  (0x5400)
#define REG_DPC_CTRL01                  (0x5401)
#define REG_DPC_CTRL02                  (0x5402)
#define REG_DPC_CTRL03                  (0x5403)
#define REG_DPC_CTRL04                  (0x5404)
#define REG_DPC_CTRL05                  (0x5405)
#define REG_DPC_CTRL0E                  (0x540E)
#define REG_RO_BTHRE                    (0x540F)

// 7-23 CIP Control registers
#define REG_SHRP_MT_GAIN_TH1            (0x5500)
#define REG_SHRP_MT_GAIN_TH2            (0x5501)
#define REG_SHRP_MT_TH1                 (0x5502)
#define REG_SHRP_MT_TH2                 (0x5503)
#define REG_DNS_GAIN_TH1                (0x5504)
#define REG_DNS_GAIN_TH2                (0x5505)
#define REG_DNS_TH1                     (0x5506)
#define REG_DNS_TH2                     (0x5507)
#define REG_CPI_CTRL                    (0x5508)
#define REG_SHRP_TH_GAIN_TH1            (0x5509)
#define REG_SHRP_TH_GAIN_TH2            (0x550A)
#define REG_SHRP_TH1                    (0x550B)
#define REG_SHRP_TH2                    (0x550C)
#define REG_RECURSIVE_DNS_EN            (0x550D)
#define REG_SHPR_MT                     (0x550E)
#define REG_DNS_TH                      (0x550F)
#define REG_SHRP_TH                     (0x5510)
#define REG_R_LOW_THR                   (0x5511)
#define REG_R_WEIGHT1                   (0x5512)
#define REG_R_WEIGHT2                   (0x5513)
#define REG_R_SHARPENMT_P               (0x5514)

// 7-24 CMX Control Registers
#define REG_CMX11                       (0x5600)
#define REG_CMX12                       (0x5601)
#define REG_CMX13                       (0x5602)
#define REG_CMX14                       (0x5603)
#define REG_CMX15                       (0x5604)
#define REG_CMX16                       (0x5605)
#define REG_CMX_SIGN                    (0x5612)
#define REG_CMX_CTRL                    (0x5615)




// 7-25 SDE Control Registers
#define REG_SDE_EN_CTRL                 (0x5800)
#define REG_SATURATION_TH2              (0x5803)
#define REG_SATURATION_TH1              (0x5804)




#define REG_Y_OFFSET                    (0x5805)
//Bit[7:0]:  Yoffset
//	     Offset coefficient for Y contrast calculation
//	    It is combined with Y GAIN and Y OFFSET  
//	    to calculate contrasted Y
#define 	Y	OFFSET		(0xFFFF << 0)

#define REG_Y_GAIN                      (0x5806)
//Bit[7:0]: Ygaim
//	    Gain coefficient for Y contrast calculation 
//	    It is combined with Y OFFSET and   
//	    Y BRIGHT to calculate contrasted Y
#define 	YGAIN			(0xFFFF << 0)

#define REG_Y_BRIGHT                    (0x5807)
//Bit[7:0]: Ybright
//	    Bright coefficient for Y contrast calculation 
//	    It is combined with Y GAIN and Y OFFSET  
//	    to calculate contrasted Y
#define 	YBRIGHT			(0xFFFF << 0)


#define REG_SIGN_BITS                   (0x5808)
// Bit[1:0]: Reserved - Not used

// Bit[2]: yoffset_sign_bit
//         Sign bit for yoffset
//         0: Yoffset is positive number (yoffset)
//         1: Yoffset is negative number (-1 * yoffset)
//
#define		YOFFSET_SIGN_BIT	(0x01 << 2)
// Bit[2]: yoffset_sign_bit
//         Sign bit for ybright
//         0: Ybright is positive number (ybright)
//         1: Ybright is negative number (-1 * ybright)
#define		YBRIGHT_SIGN_BIT	(0x01 << 3)

// Bit[7:4]: Reserved - Not used

#define REG_UVADJ_GAIN_TH1              (0x5809)
// Bit[7:0]: gain_th1
// UV adjust curve bottom gain threshold
// when real gain, which has 3 bit precision is 
// less than gain-th1, uv_adj is sat_th2
// 
// when real gain, which has 3 bit precision is 
// larger than gain_th2, uv_adj is sat_th1
//
// when real gain, which has 3 bit precision is 
// larger than gain_th1 and less than gain_th2
// uv_adj = sat_th1 + ( sat_th2 -sat_th1) * 
// (gain_th2 - real-gain)/ (gain_th2 - gain-th1)
#define		GAIN_TH1		(0xFFFF << 0)



#define REG_UVADJ_GAIN_TH2              (0x580A)
// Bit[7:0]: gain_th2
// UV adjust curve top gain threshold
// when real gain, which has 3 bit precision is 
// less than gain-th1, uv_adj is sat_th2
// 
// when real gain, which has 3 bit precision is 
// larger than gain_th2, uv_adj is sat_th1
//
// when real gain, which has 3 bit precision is 
// larger than gain_th1 and less than gain_th2
// uv_adj = sat_th1 + ( sat_th2 -sat_th1) * 
// (gain_th2 - real-gain)/ (gain_th2 - gain-th1)
#define		GAIN_TH2		(0xFFFF << 0)


#define REG_UVADJ_MAN_EN                (0x580B)

// Bit[0]: uvadj_man_en
// 0: Use the calculated uv-adj for UV adjust coefficient
// 1: Use the sat_th1 for V saturation coefficient 
//    Use the sat-th2 for U saturation coefficient 
#define 	UVADJ_MAN_EN		(0x01 << 0)

// Bit[1]: offset_man_en
// 0: Offset used in Y contrast is Y input average
// 1: Offset used in Y contrast is set in yoffset
#define		OFFSET_MAN_EN		(0x01 << 1)

// Bit[7:2]: Reserved - Not Used


#define REG_UV_ADJ                      (0x580C)
// Bit[7:0] calculated uv adjust
#define		UV_ADJUST		(0xFFFF << 0)
