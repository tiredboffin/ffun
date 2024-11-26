//UI_SETP
enum UI_SETP {
UI_SETP_NONE=0x0,
UI_SETP_LANGUAGE_SET=0x1,
UI_SETP_DATETIME_SET=0x2,
UI_SETP_PERFORMANCE_SET=0x3,
UI_SETP_DISP_CUSTOM_SET=0x4,
UI_SETP_MENUCOM_ITEM=0x5,
UI_SETP_REC_VIEW=0x6,
UI_SETP_REC_SHOW=0x7,
UI_SETP_FRAME_NO_MEM=0x8,
UI_SETP_REC_SAVE=0x9,
UI_SETP_BLURRING_CORRECT_MODE=0xa,
UI_SETP_MOVE_DETECT=0xb,
UI_SETP_BLURRING_CORRECT_MODE_AC=0xc,
UI_SETP_PROC_IMG_SAVE=0xd,
UI_SETP_RED_EYE_SAVE=0xe,
UI_SETP_DCN_SAVE=0xf,
UI_SETP_DIS_SAVE=0x10,
UI_SETP_SEAMLESS_SAVE=0x11,
UI_SETP_SUPER_RESOLUTION_ZOOM=0x12,
UI_SETP_GET_GPS_INFO=0x13,
UI_SETP_SUPER_RESOLUTION_ZOOM_STEP=0x14,
UI_SETP_SUPER_RESOLUTION_QUALITY=0x15,
UI_SETP_OVF_TARGET_DISP=0x16,
UI_SETP_FUNCBUTTON=0x17,
UI_SETP_AF_LED=0x18,
UI_SETP_DIGIZOOM=0x19,
UI_SETP_CCDRAW=0x1a,
UI_SETP_RAW=0x1b,
UI_SETP_JPEG=0x1c,
UI_SETP_JPEG_QUALITY=0x1d,
UI_SETP_LCD_VISIBILITY_UP=0x1e,
UI_SETP_AELOCK_TYPE=0x1f,
UI_SETP_LENS_CONV_SETTING=0x20,
UI_SETP_LONGBRIGHT=0x21,
UI_SETP_PINP=0x22,
UI_SETP_FOCUS_CHECK=0x23,
UI_SETP_R_NOISE_DEC=0x24,
UI_SETP_CUSTOM_SET_CALL=0x25,
UI_SETP_CUSTOM_SET_SAVE=0x26,
UI_SETP_CUSTOM_SAVE_PARAM=0x27,
UI_SETP_COLOR_SPACE=0x28,
UI_SETP_BEEP_LEVEL=0x29,
UI_SETP_SOUND=0x2a,
UI_SETP_SHUT_LEVEL=0x2b,
UI_SETP_SHUT_SOUND=0x2c,
UI_SETP_SPEAKER_VOLUME=0x2d,
UI_SETP_PLAY_AUTO_ROTATE=0x2e,
UI_SETP_THROUGH_EXP_PREV=0x2f,
UI_SETP_FILM_SIM_SET=0x30,
UI_SETP_BLOGPIXELSIZE=0x31,
UI_SETP_BRIGHTNESS=0x32,
UI_SETP_EVF_CONTROL=0x33,
UI_SETP_LCD_BRIGHTNESS=0x34,
UI_SETP_EVF_BRIGHTNESS=0x35,
UI_SETP_CHROMA=0x36,
UI_SETP_LCD_CHROMA=0x37,
UI_SETP_EVF_CHROMA=0x38,
UI_SETP_INSTAX_SHARE=0x39,
UI_SETP_EVFLCD_CHG=0x3a,
UI_SETP_FORMAT=0x3b,
UI_SETP_LANGUAGE=0x3c,
UI_SETP_POWER=0x3d,
UI_SETP_AUTO_POWER_OFF=0x3e,
UI_SETP_DATETIME=0x3f,
UI_SETP_DATE_FORMAT=0x40,
UI_SETP_DATE_YEAR=0x41,
UI_SETP_DATE_MONTH=0x42,
UI_SETP_DATE_DAY=0x43,
UI_SETP_DATE_HOUR=0x44,
UI_SETP_DATE_MINUTE=0x45,
UI_SETP_WORLDSELECT=0x46,
UI_SETP_WORLDTIME=0x47,
UI_SETP_WORLDSIGN=0x48,
UI_SETP_WORLDHOUR=0x49,
UI_SETP_WORLDMINUTES=0x4a,
UI_SETP_COLOR_SCHEME=0x4b,
UI_SETP_BATT_DISCHARGE=0x4c,
UI_SETP_VIDEO_OUT=0x4d,
UI_SETP_GPS_ALL=0x4e,
UI_SETP_GPS_SET=0x4f,
UI_SETP_GPS_INFO=0x50,
UI_SETP_GPS_TIME_DEAL=0x51,
UI_SETP_GPS_LOG=0x52,
UI_SETP_GPS_UNIT=0x53,
UI_SETP_GPS_POWER_SEARCH=0x54,
UI_SETP_GPS_POS_PRINT=0x55,
UI_SETP_POSITION=0x56,
UI_SETP_RESET_CATEGORY=0x57,
UI_SETP_OVF_ECO=0x58,
UI_SETP_RESET_REC=0x59,
UI_SETP_RESET_SETUP=0x5a,
UI_SETP_RESET=0x5b,
UI_SETP_RESET_CUSTAM=0x5c,
UI_SETP_MNT_ADPT=0x5d,
UI_SETP_MNT_ADPT_ITEM=0x5e,
UI_SETP_FOCAL_LENGTH_SET=0x5f,
UI_SETP_FOCAL_LENGTH_100_PLACE=0x60,
UI_SETP_FOCAL_LENGTH_10_PLACE=0x61,
UI_SETP_FOCAL_LENGTH_1_PLACE=0x62,
UI_SETP_MNT_ADPT_FOCAL_LENGTH_LENS1=0x63,
UI_SETP_MNT_ADPT_FOCAL_LENGTH_LENS2=0x64,
UI_SETP_MNT_ADPT_FOCAL_LENGTH_LENS3=0x65,
UI_SETP_MNT_ADPT_FOCAL_LENGTH_LENS4=0x66,
UI_SETP_MNT_ADPT_FOCAL_LENGTH_LENS5=0x67,
UI_SETP_MNT_ADPT_FOCAL_LENGTH_LENS6=0x68,
UI_SETP_DIST=0x69,
UI_SETP_MNT_ADPT_DIST_LENS1=0x6a,
UI_SETP_MNT_ADPT_DIST_LENS2=0x6b,
UI_SETP_MNT_ADPT_DIST_LENS3=0x6c,
UI_SETP_MNT_ADPT_DIST_LENS4=0x6d,
UI_SETP_MNT_ADPT_DIST_LENS5=0x6e,
UI_SETP_MNT_ADPT_DIST_LENS6=0x6f,
UI_SETP_CHD_POS=0x70,
UI_SETP_CHD_COLOR=0x71,
UI_SETP_CHD_R=0x72,
UI_SETP_MNT_ADPT_CHD_R_LU_LENS1=0x73,
UI_SETP_MNT_ADPT_CHD_R_RU_LENS1=0x74,
UI_SETP_MNT_ADPT_CHD_R_RD_LENS1=0x75,
UI_SETP_MNT_ADPT_CHD_R_LD_LENS1=0x76,
UI_SETP_MNT_ADPT_CHD_R_LU_LENS2=0x77,
UI_SETP_MNT_ADPT_CHD_R_RU_LENS2=0x78,
UI_SETP_MNT_ADPT_CHD_R_RD_LENS2=0x79,
UI_SETP_MNT_ADPT_CHD_R_LD_LENS2=0x7a,
UI_SETP_MNT_ADPT_CHD_R_LU_LENS3=0x7b,
UI_SETP_MNT_ADPT_CHD_R_RU_LENS3=0x7c,
UI_SETP_MNT_ADPT_CHD_R_RD_LENS3=0x7d,
UI_SETP_MNT_ADPT_CHD_R_LD_LENS3=0x7e,
UI_SETP_MNT_ADPT_CHD_R_LU_LENS4=0x7f,
UI_SETP_MNT_ADPT_CHD_R_RU_LENS4=0x80,
UI_SETP_MNT_ADPT_CHD_R_RD_LENS4=0x81,
UI_SETP_MNT_ADPT_CHD_R_LD_LENS4=0x82,
UI_SETP_MNT_ADPT_CHD_R_LU_LENS5=0x83,
UI_SETP_MNT_ADPT_CHD_R_RU_LENS5=0x84,
UI_SETP_MNT_ADPT_CHD_R_RD_LENS5=0x85,
UI_SETP_MNT_ADPT_CHD_R_LD_LENS5=0x86,
UI_SETP_MNT_ADPT_CHD_R_LU_LENS6=0x87,
UI_SETP_MNT_ADPT_CHD_R_RU_LENS6=0x88,
UI_SETP_MNT_ADPT_CHD_R_RD_LENS6=0x89,
UI_SETP_MNT_ADPT_CHD_R_LD_LENS6=0x8a,
UI_SETP_CHD_B=0x8b,
UI_SETP_MNT_ADPT_CHD_B_LU_LENS1=0x8c,
UI_SETP_MNT_ADPT_CHD_B_RU_LENS1=0x8d,
UI_SETP_MNT_ADPT_CHD_B_RD_LENS1=0x8e,
UI_SETP_MNT_ADPT_CHD_B_LD_LENS1=0x8f,
UI_SETP_MNT_ADPT_CHD_B_LU_LENS2=0x90,
UI_SETP_MNT_ADPT_CHD_B_RU_LENS2=0x91,
UI_SETP_MNT_ADPT_CHD_B_RD_LENS2=0x92,
UI_SETP_MNT_ADPT_CHD_B_LD_LENS2=0x93,
UI_SETP_MNT_ADPT_CHD_B_LU_LENS3=0x94,
UI_SETP_MNT_ADPT_CHD_B_RU_LENS3=0x95,
UI_SETP_MNT_ADPT_CHD_B_RD_LENS3=0x96,
UI_SETP_MNT_ADPT_CHD_B_LD_LENS3=0x97,
UI_SETP_MNT_ADPT_CHD_B_LU_LENS4=0x98,
UI_SETP_MNT_ADPT_CHD_B_RU_LENS4=0x99,
UI_SETP_MNT_ADPT_CHD_B_RD_LENS4=0x9a,
UI_SETP_MNT_ADPT_CHD_B_LD_LENS4=0x9b,
UI_SETP_MNT_ADPT_CHD_B_LU_LENS5=0x9c,
UI_SETP_MNT_ADPT_CHD_B_RU_LENS5=0x9d,
UI_SETP_MNT_ADPT_CHD_B_RD_LENS5=0x9e,
UI_SETP_MNT_ADPT_CHD_B_LD_LENS5=0x9f,
UI_SETP_MNT_ADPT_CHD_B_LU_LENS6=0xa0,
UI_SETP_MNT_ADPT_CHD_B_RU_LENS6=0xa1,
UI_SETP_MNT_ADPT_CHD_B_RD_LENS6=0xa2,
UI_SETP_MNT_ADPT_CHD_B_LD_LENS6=0xa3,
UI_SETP_VIGNT=0xa4,
UI_SETP_MNT_ADPT_VIGNT_LENS1=0xa5,
UI_SETP_MNT_ADPT_VIGNT_LENS2=0xa6,
UI_SETP_MNT_ADPT_VIGNT_LENS3=0xa7,
UI_SETP_MNT_ADPT_VIGNT_LENS4=0xa8,
UI_SETP_MNT_ADPT_VIGNT_LENS5=0xa9,
UI_SETP_MNT_ADPT_VIGNT_LENS6=0xaa,
UI_SETP_UNMOUNT_SHUTTER=0xab,
UI_SETP_PRE_AF=0xac,
UI_SETP_USB_MODE=0xad,
UI_SETP_IRDA_DIRECTION=0xae,
UI_SETP_SMARTPHONE=0xaf,
UI_SETP_SMARTPHONE_COMPRESS=0xb0,
UI_SETP_WLAN_SSID=0xb1,
UI_SETP_WLAN_SSID_LENGTH=0xb2,
UI_SETP_SMARTPHONE_ID=0xb3,
UI_SETP_SMARTPHONE_CONNECTED=0xb4,
UI_SETP_MAC_ADDRESS=0xb5,
UI_SETP_DATE_PRINT=0xb6,
UI_SETP_MIC_REMOTE=0xb7,
UI_SETP_UNDERWATER=0xb8,
UI_SETP_EYE_FI_SEND=0xb9,
UI_SETP_CONNECT_SETTING=0xba,
UI_SETP_PC_SAVE=0xbb,
UI_SETP_PC_SAVE_EASY=0xbc,
UI_SETP_PC_SAVE_MANUAL=0xbd,
UI_SETP_WIRELESS=0xbe,
UI_SETP_WILESS_COM=0xbf,
UI_SETP_WIRELESS_SET_NAME=0xc0,
UI_SETP_WILESS_PCSAVE_SET=0xc1,
UI_SETP_WILESS_PCSAVE_CANCEL=0xc2,
UI_SETP_WILESS_COM_INIT=0xc3,
UI_SETP_WILESS_PCSAVE_CANCEL_PC1=0xc4,
UI_SETP_WILESS_PCSAVE_CANCEL_PC2=0xc5,
UI_SETP_WILESS_PCSAVE_CANCEL_PC3=0xc6,
UI_SETP_WILESS_PCSAVE_CANCEL_PC4=0xc7,
UI_SETP_WILESS_PCSAVE_CANCEL_PC5=0xc8,
UI_SETP_WILESS_PCSAVE_CANCEL_PC6=0xc9,
UI_SETP_INSTAX_SSID=0xca,
UI_SETP_INSTAX_SSID_DIGIT8=0xcb,
UI_SETP_INSTAX_SSID_DIGIT7=0xcc,
UI_SETP_INSTAX_SSID_DIGIT6=0xcd,
UI_SETP_INSTAX_SSID_DIGIT5=0xce,
UI_SETP_INSTAX_SSID_DIGIT4=0xcf,
UI_SETP_INSTAX_SSID_DIGIT3=0xd0,
UI_SETP_INSTAX_SSID_DIGIT2=0xd1,
UI_SETP_INSTAX_SSID_DIGIT1=0xd2,
UI_SETP_INSTAX_PASSWORD=0xd3,
UI_SETP_INSTAX_PASSWORD_DIGIT4=0xd4,
UI_SETP_INSTAX_PASSWORD_DIGIT3=0xd5,
UI_SETP_INSTAX_PASSWORD_DIGIT2=0xd6,
UI_SETP_INSTAX_PASSWORD_DIGIT1=0xd7,
UI_SETP_GPS_DEMO=0xd8,
UI_SETP_ISO_DIAL=0xd9,
UI_SETP_ISO_DIAL_H1=0xda,
UI_SETP_ISO_DIAL_H2=0xdb,
UI_SETP_DUST_REDUCTION=0xdc,
UI_SETP_DUST_REDUCTION_PON=0xdd,
UI_SETP_DUST_REDUCTION_POFF=0xde,
UI_SETP_AEAF_LOCK=0xdf,
UI_SETP_AEAF_LOCK_STATUS=0xe0,
UI_SETP_AE_LOCK_STATUS=0xe1,
UI_SETP_AF_LOCK_STATUS=0xe2,
UI_SETP_BATTERY_KIND=0xe3,
UI_SETP_RESTART=0xe4,
UI_SETP_OSD_FRAME=0xe5,
UI_SETP_FRAME_LINE_SET_0=0xe6,
UI_SETP_FRAME_LINE_COLOR_0=0xe7,
UI_SETP_FRAME_LINE_COLOR_ALPHA_0=0xe8,
UI_SETP_FRAME_LINE_WIDTH_0=0xe9,
UI_SETP_FRAME_LINE_H_POS1_0=0xea,
UI_SETP_FRAME_LINE_H_POS2_0=0xeb,
UI_SETP_FRAME_LINE_H_POS3_0=0xec,
UI_SETP_FRAME_LINE_H_POS4_0=0xed,
UI_SETP_FRAME_LINE_H_POS5_0=0xee,
UI_SETP_FRAME_LINE_V_POS1_0=0xef,
UI_SETP_FRAME_LINE_V_POS2_0=0xf0,
UI_SETP_FRAME_LINE_V_POS3_0=0xf1,
UI_SETP_FRAME_LINE_V_POS4_0=0xf2,
UI_SETP_FRAME_LINE_V_POS5_0=0xf3,
UI_SETP_FRAME_LINE_SET_90=0xf4,
UI_SETP_FRAME_LINE_COLOR_90=0xf5,
UI_SETP_FRAME_LINE_COLOR_ALPHA_90=0xf6,
UI_SETP_FRAME_LINE_WIDTH_90=0xf7,
UI_SETP_FRAME_LINE_H_POS1_90=0xf8,
UI_SETP_FRAME_LINE_H_POS2_90=0xf9,
UI_SETP_FRAME_LINE_H_POS3_90=0xfa,
UI_SETP_FRAME_LINE_H_POS4_90=0xfb,
UI_SETP_FRAME_LINE_H_POS5_90=0xfc,
UI_SETP_FRAME_LINE_V_POS1_90=0xfd,
UI_SETP_FRAME_LINE_V_POS2_90=0xfe,
UI_SETP_FRAME_LINE_V_POS3_90=0xff,
UI_SETP_FRAME_LINE_V_POS4_90=0x100,
UI_SETP_FRAME_LINE_V_POS5_90=0x101,
UI_SETP_FRAME_LINE_SET_180=0x102,
UI_SETP_FRAME_LINE_COLOR_180=0x103,
UI_SETP_FRAME_LINE_COLOR_ALPHA_180=0x104,
UI_SETP_FRAME_LINE_WIDTH_180=0x105,
UI_SETP_FRAME_LINE_H_POS1_180=0x106,
UI_SETP_FRAME_LINE_H_POS2_180=0x107,
UI_SETP_FRAME_LINE_H_POS3_180=0x108,
UI_SETP_FRAME_LINE_H_POS4_180=0x109,
UI_SETP_FRAME_LINE_H_POS5_180=0x10a,
UI_SETP_FRAME_LINE_V_POS1_180=0x10b,
UI_SETP_FRAME_LINE_V_POS2_180=0x10c,
UI_SETP_FRAME_LINE_V_POS3_180=0x10d,
UI_SETP_FRAME_LINE_V_POS4_180=0x10e,
UI_SETP_FRAME_LINE_V_POS5_180=0x10f,
UI_SETP_FRAME_LINE_SET_270=0x110,
UI_SETP_FRAME_LINE_COLOR_270=0x111,
UI_SETP_FRAME_LINE_COLOR_ALPHA_270=0x112,
UI_SETP_FRAME_LINE_WIDTH_270=0x113,
UI_SETP_FRAME_LINE_H_POS1_270=0x114,
UI_SETP_FRAME_LINE_H_POS2_270=0x115,
UI_SETP_FRAME_LINE_H_POS3_270=0x116,
UI_SETP_FRAME_LINE_H_POS4_270=0x117,
UI_SETP_FRAME_LINE_H_POS5_270=0x118,
UI_SETP_FRAME_LINE_V_POS1_270=0x119,
UI_SETP_FRAME_LINE_V_POS2_270=0x11a,
UI_SETP_FRAME_LINE_V_POS3_270=0x11b,
UI_SETP_FRAME_LINE_V_POS4_270=0x11c,
UI_SETP_FRAME_LINE_V_POS5_270=0x11d,
UI_SETP_FOCUS_RING=0x11e,
UI_SETP_SCALE_UNIT=0x11f,
UI_SETP_OPENNING=0x120,
UI_SETP_AUTO_ROTATE_SHOW=0x121,
UI_SETP_FUNCLOCK=0x122,
UI_SETP_FUNCLOCK_KIND=0x123,
UI_SETP_FUNCLOCK_SET=0x124,
UI_SETP_FUNCLOCK_FOCUSMODE=0x125,
UI_SETP_FUNCLOCK_FNUMBER=0x126,
UI_SETP_FUNCLOCK_SHUTTER=0x127,
UI_SETP_FUNCLOCK_ISO=0x128,
UI_SETP_FUNCLOCK_EXPOSURE=0x129,
UI_SETP_FUNCLOCK_DRV_DIAL=0x12a,
UI_SETP_FUNCLOCK_AE=0x12b,
UI_SETP_FUNCLOCK_OIS=0x12c,
UI_SETP_FUNCLOCK_PSHIFT=0x12d,
UI_SETP_FUNCLOCK_VIEW=0x12e,
UI_SETP_FUNCLOCK_DISP=0x12f,
UI_SETP_FUNCLOCK_AE_LOCK=0x130,
UI_SETP_FUNCLOCK_AF_LOCK=0x131,
UI_SETP_FUNCLOCK_FOCUS_ASSIST=0x132,
UI_SETP_FUNCLOCK_UP=0x133,
UI_SETP_FUNCLOCK_DOWN=0x134,
UI_SETP_FUNCLOCK_LEFT=0x135,
UI_SETP_FUNCLOCK_RIGHT=0x136,
UI_SETP_FUNCLOCK_FN1=0x137,
UI_SETP_FUNCLOCK_FN2=0x138,
UI_SETP_FUNCLOCK_Q_AF=0x139,
UI_SETP_FUNCLOCK_Q_FACEDETECT=0x13a,
UI_SETP_FUNCLOCK_Q_MENU=0x13b,
UI_SETP_FUNCLOCK_REC_MENU=0x13c,
UI_SETP_FUNCLOCK_FORMAT=0x13d,
UI_SETP_FUNCLOCK_DELETE=0x13e,
UI_SETP_FUNCLOCK_DATE_TIME=0x13f,
UI_SETP_FUNCLOCK_RESET=0x140,
UI_SETP_FUNCLOCK_MANNER=0x141,
UI_SETP_FUNCLOCK_SOUND=0x142,
UI_SETP_FUNCLOCK_SHOW=0x143,
UI_SETP_FUNCLOCK_MOVIE_BUTTON=0x144,
UI_SETP_FUNCLOCK_COLOR_SPACE=0x145,
UI_SETP_FUNCLOCK_SETUP_MENU=0x146,
UI_SETP_BUTTON_SETTING=0x147,
UI_SETP_CMD_DIAL=0x148,
UI_SETP_CROSSKEY_SET=0x149,
UI_SETP_AEAF_LOCK_BUTTON=0x14a,
UI_SETP_Q_MENU=0x14b,
UI_SETP_Q_MENU_SELECT1=0x14c,
UI_SETP_Q_MENU_SELECT2=0x14d,
UI_SETP_Q_MENU_SELECT3=0x14e,
UI_SETP_Q_MENU_SELECT4=0x14f,
UI_SETP_Q_MENU_SELECT5=0x150,
UI_SETP_Q_MENU_SELECT6=0x151,
UI_SETP_Q_MENU_SELECT7=0x152,
UI_SETP_Q_MENU_SELECT8=0x153,
UI_SETP_Q_MENU_SELECT9=0x154,
UI_SETP_Q_MENU_SELECT10=0x155,
UI_SETP_Q_MENU_SELECT11=0x156,
UI_SETP_Q_MENU_SELECT12=0x157,
UI_SETP_Q_MENU_SELECT13=0x158,
UI_SETP_Q_MENU_SELECT14=0x159,
UI_SETP_Q_MENU_SELECT15=0x15a,
UI_SETP_Q_MENU_SELECT16=0x15b,
UI_SETP_REC_MODE=0x15c,
UI_SETP_REC_MODE_FUNC_OPTION=0x15d,
UI_SETP_PERFORMANCE=0x15e,
UI_SETP_PERFORMANCE_AC=0x15f,
UI_SETP_QUICK=0x160,
UI_SETP_EVFLCD_FPS=0x161,
UI_SETP_REC_ERASE=0x162,
UI_SETP_PLAY_ERASE_MENU=0x163,
UI_SETP_REC_MODE_SP1=0x164,
UI_SETP_REC_MODE_SP2=0x165,
UI_SETP_REC_MODE_NP=0x166,
UI_SETP_REC_ADV_MODE=0x167,
UI_SETP_REC_ADV_MODE_FILTER=0x168,
UI_SETP_REC_ADV_MODE_FILTER2=0x169,
UI_SETP_REC_DRV_BKT_ADV_FILTER=0x16a,
UI_SETP_REC_DRV_BKT_ADV_FILTER2=0x16b,
UI_SETP_REC_EXR_MODE=0x16c,
UI_SETP_REC_M_MODE=0x16d,
UI_SETP_REC_M_MODE_CUSTAM1=0x16e,
UI_SETP_REC_M_MODE_CUSTAM2=0x16f,
UI_SETP_REC_M_MODE_CUSTAM3=0x170,
UI_SETP_WB=0x171,
UI_SETP_WB_KELVIN=0x172,
UI_SETP_NR=0x173,
UI_SETP_ND_FILTER=0x174,
UI_SETP_Q_NONE=0x175,
UI_SETP_INTERVAL_EXE=0x176,
UI_SETP_INTERVAL=0x177,
UI_SETP_INTERVAL_HOUR=0x178,
UI_SETP_INTERVAL_MINUTE=0x179,
UI_SETP_INTERVAL_SECOND=0x17a,
UI_SETP_INTERVAL_TIMES=0x17b,
UI_SETP_INTERVAL_START_HOUR=0x17c,
UI_SETP_INTERVAL_START_MINUTE=0x17d,
UI_SETP_INTERVAL_COUNT=0x17e,
UI_SETP_INTERVAL_NEXT_TIME=0x17f,
UI_SETP_INTERVAL_STATUS=0x180,
UI_SETP_LEQ=0x181,
UI_SETP_MOVIE_SET=0x182,
UI_SETP_MOVIE_PIXEL_MODE=0x183,
UI_SETP_MOVIE_PIXEL=0x184,
UI_SETP_MOVIE_FPS=0x185,
UI_SETP_MOVIE_STILL=0x186,
UI_SETP_SR_AUTO=0x187,
UI_SETP_MIC_LEVEL=0x188,
UI_SETP_PIXEL=0x189,
UI_SETP_PIXEL_SIZE=0x18a,
UI_SETP_PIXEL_INMEMORY=0x18b,
UI_SETP_PIXEL_NUMBER=0x18c,
UI_SETP_ASPECT=0x18d,
UI_SETP_QUALITY=0x18e,
UI_SETP_QUALITY_INMEMORY=0x18f,
UI_SETP_FUNC_SET=0x190,
UI_SETP_FUNC2_SET=0x191,
UI_SETP_FUNC3_SET=0x192,
UI_SETP_FUNC4_SET=0x193,
UI_SETP_FUNC5_SET=0x194,
UI_SETP_FUNC6_SET=0x195,
UI_SETP_FUNC7_SET=0x196,
UI_SETP_FUNC8_SET=0x197,
UI_SETP_FILM_SIM=0x198,
UI_SETP_FILM_SIM_SELECT=0x199,
UI_SETP_FILM_SIM_SELECT2=0x19a,
UI_SETP_FILM_SIM_SELECT_1=0x19b,
UI_SETP_FILM_SIM_SELECT_2=0x19c,
UI_SETP_FILM_SIM_SELECT_3=0x19d,
UI_SETP_FILM_SIM_2_SELECT_1=0x19e,
UI_SETP_FILM_SIM_2_SELECT_2=0x19f,
UI_SETP_FILM_SIM_2_SELECT_3=0x1a0,
UI_SETP_FILM_SIM_SELECT_FILMSIM=0x1a1,
UI_SETP_DRANGE=0x1a2,
UI_SETP_DRANGE_SM=0x1a3,
UI_SETP_DRANGE_P=0x1a4,
UI_SETP_DRANGE_S=0x1a5,
UI_SETP_DRANGE_A=0x1a6,
UI_SETP_DRANGE_EXR=0x1a7,
UI_SETP_DRANGE_MULTI_EXPO=0x1a8,
UI_SETP_DRANGE_ADV_FILTER=0x1a9,
UI_SETP_DRANGE_PANORAMA=0x1aa,
UI_SETP_CONTRAST=0x1ab,
UI_SETP_SATURATION=0x1ac,
UI_SETP_STILLCOLOR=0x1ad,
UI_SETP_SHARPNESS=0x1ae,
UI_SETP_HIGHLIGHT=0x1af,
UI_SETP_SHADOW=0x1b0,
UI_SETP_WB_TUNING=0x1b1,
UI_SETP_WB_TUNING_R=0x1b2,
UI_SETP_WB_TUNING_R_AUTO=0x1b3,
UI_SETP_WB_TUNING_R_CUSTOM=0x1b4,
UI_SETP_WB_TUNING_R_KELVIN=0x1b5,
UI_SETP_WB_TUNING_R_CLEAR=0x1b6,
UI_SETP_WB_TUNING_R_CLOUDY=0x1b7,
UI_SETP_WB_TUNING_R_F_LAMP1=0x1b8,
UI_SETP_WB_TUNING_R_F_LAMP2=0x1b9,
UI_SETP_WB_TUNING_R_F_LAMP3=0x1ba,
UI_SETP_WB_TUNING_R_BULB=0x1bb,
UI_SETP_WB_TUNING_R_UNDERWATER=0x1bc,
UI_SETP_WB_TUNING_B=0x1bd,
UI_SETP_WB_TUNING_B_AUTO=0x1be,
UI_SETP_WB_TUNING_B_CUSTOM=0x1bf,
UI_SETP_WB_TUNING_B_KELVIN=0x1c0,
UI_SETP_WB_TUNING_B_CLEAR=0x1c1,
UI_SETP_WB_TUNING_B_CLOUDY=0x1c2,
UI_SETP_WB_TUNING_B_F_LAMP1=0x1c3,
UI_SETP_WB_TUNING_B_F_LAMP2=0x1c4,
UI_SETP_WB_TUNING_B_F_LAMP3=0x1c5,
UI_SETP_WB_TUNING_B_BULB=0x1c6,
UI_SETP_WB_TUNING_B_UNDERWATER=0x1c7,
UI_SETP_FOCUS=0x1c8,
UI_SETP_FOCUS_MENUAL=0x1c9,
UI_SETP_NAME=0x1ca,
UI_SETP_FILE_NAME=0x1cb,
UI_SETP_FILE_NAME_ADOBERGB=0x1cc,
UI_SETP_FILE_NAME_SRGB=0x1cd,
UI_SETP_FLASH_SET=0x1ce,
UI_SETP_FLASH_COM=0x1cf,
UI_SETP_BRACKET=0x1d0,
UI_SETP_BRACKET2=0x1d1,
UI_SETP_SELFTIMER=0x1d2,
UI_SETP_MULTI_EXPO=0x1d3,
UI_SETP_EXT_FLASH=0x1d4,
UI_SETP_BEAUTIFULSKIN=0x1d5,
UI_SETP_RED_EYE=0x1d6,
UI_SETP_ISO=0x1d7,
UI_SETP_ISO_AUTO=0x1d8,
UI_SETP_ISO_PSAM=0x1d9,
UI_SETP_ISO_MULTI_EXPO=0x1da,
UI_SETP_ISO_ADV_FILTER=0x1db,
UI_SETP_ISO_PANORAMA=0x1dc,
UI_SETP_ISO_MOVIE=0x1dd,
UI_SETP_ISO_EX=0x1de,
UI_SETP_ISOAUTO_SET=0x1df,
UI_SETP_ISOAUTO_SET_BASE=0x1e0,
UI_SETP_ISOAUTO_SET_BASE_AUTO=0x1e1,
UI_SETP_ISOAUTO2_SET_BASE_AUTO=0x1e2,
UI_SETP_ISOAUTO3_SET_BASE_AUTO=0x1e3,
UI_SETP_ISOAUTO_SET_BASE_ADV_MULTI_EXPO=0x1e4,
UI_SETP_ISOAUTO2_SET_BASE_ADV_MULTI_EXPO=0x1e5,
UI_SETP_ISOAUTO3_SET_BASE_ADV_MULTI_EXPO=0x1e6,
UI_SETP_ISOAUTO_SET_BASE_PSAM=0x1e7,
UI_SETP_ISOAUTO2_SET_BASE_PSAM=0x1e8,
UI_SETP_ISOAUTO3_SET_BASE_PSAM=0x1e9,
UI_SETP_ISOAUTO_SET_BASE_PANORAMA=0x1ea,
UI_SETP_ISOAUTO2_SET_BASE_PANORAMA=0x1eb,
UI_SETP_ISOAUTO3_SET_BASE_PANORAMA=0x1ec,
UI_SETP_ISOAUTO_SET_MAX=0x1ed,
UI_SETP_ISOAUTO_SET_MAX_AUTO=0x1ee,
UI_SETP_ISOAUTO2_SET_MAX_AUTO=0x1ef,
UI_SETP_ISOAUTO3_SET_MAX_AUTO=0x1f0,
UI_SETP_ISOAUTO_SET_MAX_ADV_MULTI_EXPO=0x1f1,
UI_SETP_ISOAUTO2_SET_MAX_ADV_MULTI_EXPO=0x1f2,
UI_SETP_ISOAUTO3_SET_MAX_ADV_MULTI_EXPO=0x1f3,
UI_SETP_ISOAUTO_SET_MAX_PSAM=0x1f4,
UI_SETP_ISOAUTO2_SET_MAX_PSAM=0x1f5,
UI_SETP_ISOAUTO3_SET_MAX_PSAM=0x1f6,
UI_SETP_ISOAUTO_SET_MAX_PANORAMA=0x1f7,
UI_SETP_ISOAUTO2_SET_MAX_PANORAMA=0x1f8,
UI_SETP_ISOAUTO3_SET_MAX_PANORAMA=0x1f9,
UI_SETP_ISOAUTO_SET_LOWSPD_SHUT=0x1fa,
UI_SETP_ISOAUTO_SET_LOWSPD_SHUT_AUTO=0x1fb,
UI_SETP_ISOAUTO2_SET_LOWSPD_SHUT_AUTO=0x1fc,
UI_SETP_ISOAUTO3_SET_LOWSPD_SHUT_AUTO=0x1fd,
UI_SETP_ISOAUTO_SET_LOWSPD_SHUT_ADV_MULTI_EXPO=0x1fe,
UI_SETP_ISOAUTO2_SET_LOWSPD_SHUT_ADV_MULTI_EXPO=0x1ff,
UI_SETP_ISOAUTO3_SET_LOWSPD_SHUT_ADV_MULTI_EXPO=0x200,
UI_SETP_ISOAUTO_SET_LOWSPD_SHUT_PSAM=0x201,
UI_SETP_ISOAUTO2_SET_LOWSPD_SHUT_PSAM=0x202,
UI_SETP_ISOAUTO3_SET_LOWSPD_SHUT_PSAM=0x203,
UI_SETP_ISOAUTO_SET_LOWSPD_SHUT_PANORAMA=0x204,
UI_SETP_ISOAUTO2_SET_LOWSPD_SHUT_PANORAMA=0x205,
UI_SETP_ISOAUTO3_SET_LOWSPD_SHUT_PANORAMA=0x206,
UI_SETP_POI_PLACENAME=0x207,
UI_SETP_WLAN_PC_SSID=0x208,
UI_SETP_WLAN_PC_PASSWORD=0x209,
UI_SETP_ADV_DIS=0x20a,
UI_SETP_CUSTAM_SAVE=0x20b,
UI_SETP_SETUP=0x20c,
UI_SETP_CAF_CTRL=0x20d,
UI_SETP_PC_CONTROL=0x20e,
UI_SETP_LCD_STS=0x20f,
UI_SETP_AVOUT=0x210,
UI_SETP_LENS_BARRIER=0x211,
UI_SETP_ELE_BLURRING_CORRECT=0x212,
UI_SETP_ENHANCED_MOD=0x213,
UI_SETP_SELFTIMER_SIDE=0x214,
UI_SETP_BLURRING_CORRECT_PREV=0x215,
UI_SETP_MF_ASSIST=0x216,
UI_SETP_MF_ASSIST_PEAKING=0x217,
UI_SETP_MF_ASSIST_PEAKING_STRENGTH=0x218,
UI_SETP_MF_ASSIST_PEAKING_COLOR=0x219,
UI_SETP_MF_ASSIST_STD=0x21a,
UI_SETP_MF_ASSIST_SPLIT=0x21b,
UI_SETP_MF_ASSIST_AND_PEAKING=0x21c,
UI_SETP_LEVELTESTER=0x21d,
UI_SETP_FNUM=0x21e,
UI_SETP_FNUM_AUTOMANUAL=0x21f,
UI_SETP_ISO_BKT_M=0x220,
UI_SETP_ISO_BKT_P=0x221,
UI_SETP_ISO_BKT_A=0x222,
UI_SETP_ISO_BKT_S=0x223,
UI_SETP_ISO_BKT=0x224,
UI_SETP_ISO_BKT2=0x225,
UI_SETP_REC_DRV_BKT_ADV=0x226,
UI_SETP_REC_DRV_BKT=0x227,
UI_SETP_REC_DRV_BKT2=0x228,
UI_SETP_BKT_SETTING=0x229,
UI_SETP_BKT_SETTING2=0x22a,
UI_SETP_WB_BKT=0x22b,
UI_SETP_WB_BKT2=0x22c,
UI_SETP_REC_AUTO_FOCUS=0x22d,
UI_SETP_REC_AUTO_FOCUS_REL_FOCUS=0x22e,
UI_SETP_AF_S=0x22f,
UI_SETP_AF_C=0x230,
UI_SETP_REC_AUTO_FOCUS_ONE_PUSH_AF=0x231,
UI_SETP_FULLTIME_MF=0x232,
UI_SETP_DSP_CUSTOM=0x233,
UI_SETP_LCD_CUSTOM=0x234,
UI_SETP_LCD_CUSTOM_NUMBER=0x235,
UI_SETP_LCD_CUSTOM_PXL=0x236,
UI_SETP_LCD_CUSTOM_GUIDE=0x237,
UI_SETP_LCD_CUSTOM_ICON=0x238,
UI_SETP_LCD_CUSTOM_LEVEL=0x239,
UI_SETP_LCD_CUSTOM_HISTOGRAM=0x23a,
UI_SETP_LCD_CUSTOM_WB=0x23b,
UI_SETP_LCD_CUSTOM_RANGEFINDER=0x23c,
UI_SETP_LCD_CUSTOM_MF_RANGEFINDER=0x23d,
UI_SETP_LCD_CUSTOM_BATTERY=0x23e,
UI_SETP_LCD_CUSTOM_PHOTOMETRY=0x23f,
UI_SETP_LCD_CUSTOM_FLASH=0x240,
UI_SETP_LCD_CUSTOM_FSIM=0x241,
UI_SETP_LCD_CUSTOM_DRANGE=0x242,
UI_SETP_LCD_CUSTOM_EXPOSURE=0x243,
UI_SETP_LCD_CUSTOM_MOVIE=0x244,
UI_SETP_LCD_CUSTOM_TARGET=0x245,
UI_SETP_LCD_CUSTOM_FOCUS=0x246,
UI_SETP_LCD_CUSTOM_RECMODE=0x247,
UI_SETP_LCD_CUSTOM_BASE=0x248,
UI_SETP_LCD_CUSTOM_CONT=0x249,
UI_SETP_LCD_CUSTOM_SHUTTER_TYPE=0x24a,
UI_SETP_LCD_CUSTOM_BLURRING_CORRECT=0x24b,
UI_SETP_OVF_CUSTOM=0x24c,
UI_SETP_OVF_CUSTOM_NUMBER=0x24d,
UI_SETP_OVF_CUSTOM_PXL=0x24e,
UI_SETP_OVF_CUSTOM_GUIDE=0x24f,
UI_SETP_OVF_CUSTOM_ICON=0x250,
UI_SETP_OVF_CUSTOM_LEVEL=0x251,
UI_SETP_OVF_CUSTOM_HISTOGRAM=0x252,
UI_SETP_OVF_CUSTOM_WB=0x253,
UI_SETP_OVF_CUSTOM_RANGEFINDER=0x254,
UI_SETP_OVF_CUSTOM_MF_RANGEFINDER=0x255,
UI_SETP_OVF_CUSTOM_BATTERY=0x256,
UI_SETP_OVF_CUSTOM_PHOTOMETRY=0x257,
UI_SETP_OVF_CUSTOM_FLASH=0x258,
UI_SETP_OVF_CUSTOM_FSIM=0x259,
UI_SETP_OVF_CUSTOM_DRANGE=0x25a,
UI_SETP_OVF_CUSTOM_EXPOSURE=0x25b,
UI_SETP_OVF_CUSTOM_MOVIE=0x25c,
UI_SETP_OVF_CUSTOM_TARGET=0x25d,
UI_SETP_OVF_CUSTOM_FOCUS=0x25e,
UI_SETP_OVF_CUSTOM_RECMODE=0x25f,
UI_SETP_OVF_CUSTOM_BASE=0x260,
UI_SETP_OVF_CUSTOM_CONT=0x261,
UI_SETP_OVF_CUSTOM_SHUTTER_TYPE=0x262,
UI_SETP_OVF_CUSTOM_BLURRING_CORRECT=0x263,
UI_SETP_SHUTTER_TYPE=0x264,
UI_SETP_CONTINUOUS=0x265,
UI_SETP_CONTINUOUS2=0x266,
UI_SETP_ONESHOT=0x267,
UI_SETP_ADV_TURNING_DIRECTION=0x268,
UI_SETP_ADV_MULTI_EXPO=0x269,
UI_SETP_FRONT_END_CONTINUOUS=0x26a,
UI_SETP_MOVIE=0x26b,
UI_SETP_ADV_FILTER=0x26c,
UI_SETP_FSIM_BKT=0x26d,
UI_SETP_FSIM_BKT2=0x26e,
UI_SETP_DRANGE_BKT=0x26f,
UI_SETP_DRANGE_BKT2=0x270,
UI_SETP_IMAGE_QUALITY_BKT=0x271,
UI_SETP_ADV_MODE=0x272,
UI_SETP_EXFUNC=0x273,
UI_SETP_EXFUNCKEY_SET_CALL=0x274,
UI_SETP_EXFUNCKEY_SET=0x275,
UI_SETP_CTLRING_SET=0x276,
UI_SETP_EXFUNC_PLAY_SET=0x277,
UI_SETP_EXFUNC_MOVIE_SET=0x278,
UI_SETP_EXFUNC_UP_SET=0x279,
UI_SETP_EXFUNC_DOWN_SET=0x27a,
UI_SETP_EXFUNC_LEFT_SET=0x27b,
UI_SETP_EXFUNC_RIGHT_SET=0x27c,
UI_SETP_PHOTOMETRYMODE=0x27d,
UI_SETP_AF_AREA_LINK=0x27e,
UI_SETP_LCD_GAIN_UP=0x27f,
UI_SETP_PCSH_FOCUS=0x280,
UI_SETP_EXPOSURE=0x281,
UI_SETP_PSHIFT=0x282,
UI_SETP_FNUMBER_STEP=0x283,
UI_SETP_FNUMBER_STEP_M=0x284,
UI_SETP_FNUMBER_STEP_A=0x285,
UI_SETP_FNUMBER=0x286,
UI_SETP_FNUMBER_M=0x287,
UI_SETP_FNUMBER_A=0x288,
UI_SETP_SHUTTER_SPEED=0x289,
UI_SETP_SHUTTER_SPEED_S=0x28a,
UI_SETP_SHUTTER_SPEED_M=0x28b,
UI_SETP_APERTURE_STEP=0x28c,
UI_SETP_SHUTTER_STEP=0x28d,
UI_SETP_SHUTTER_STEP_T=0x28e,
UI_SETP_FNUMBER_DIAL=0x28f,
UI_SETP_SHUTTER_DIAL=0x290,
UI_SETP_SHUTTER_SPEED_NLONG=0x291,
UI_SETP_SHUTTER_SPEED_FIREWORKSLONG=0x292,
UI_SETP_DCN_STRENGTH=0x293,
UI_SETP_REC_LCDDISP=0x294,
UI_SETP_REC_LCDDISP_MF=0x295,
UI_SETP_MACRO=0x296,
UI_SETP_FOCUS_MODE=0x297,
UI_SETP_AF_MODE=0x298,
UI_SETP_AFAREA_X=0x299,
UI_SETP_AFAREA_Y=0x29a,
UI_SETP_AFAREA_X_90=0x29b,
UI_SETP_AFAREA_Y_90=0x29c,
UI_SETP_AFAREA_X_180=0x29d,
UI_SETP_AFAREA_Y_180=0x29e,
UI_SETP_AFAREA_X_270=0x29f,
UI_SETP_AFAREA_Y_270=0x2a0,
UI_SETP_ZONE_AFAREA_X=0x2a1,
UI_SETP_ZONE_AFAREA_Y=0x2a2,
UI_SETP_TRACKING_AFAREA_X=0x2a3,
UI_SETP_TRACKING_AFAREA_Y=0x2a4,
UI_SETP_CH_AFC_AFAREA_X=0x2a5,
UI_SETP_CH_AFC_AFAREA_Y=0x2a6,
UI_SETP_CH_AFC_ZONE_AFAREA_X=0x2a7,
UI_SETP_CH_AFC_ZONE_AFAREA_Y=0x2a8,
UI_SETP_CH_AFC_TRACKING_AFAREA_X=0x2a9,
UI_SETP_CH_AFC_TRACKING_AFAREA_Y=0x2aa,
UI_SETP_AREA_SIZE=0x2ab,
UI_SETP_CH_AFC_AREA_SIZE=0x2ac,
UI_SETP_SPACE_SIZE=0x2ad,
UI_SETP_CH_AFC_SPACE_SIZE=0x2ae,
UI_SETP_AREA_SIZE_90=0x2af,
UI_SETP_AREA_SIZE_180=0x2b0,
UI_SETP_AREA_SIZE_270=0x2b1,
UI_SETP_MFAREA_X=0x2b2,
UI_SETP_MFAREA_Y=0x2b3,
UI_SETP_MFAREA_X_90=0x2b4,
UI_SETP_MFAREA_Y_90=0x2b5,
UI_SETP_MFAREA_X_180=0x2b6,
UI_SETP_MFAREA_Y_180=0x2b7,
UI_SETP_MFAREA_X_270=0x2b8,
UI_SETP_MFAREA_Y_270=0x2b9,
UI_SETP_MFEXPANDMAG=0x2ba,
UI_SETP_OVF_SW_EXPANDMAG=0x2bb,
UI_SETP_OVFEVF=0x2bc,
UI_SETP_OVF_SW_ONOFF=0x2bd,
UI_SETP_REC_LCDDISP_EVF=0x2be,
UI_SETP_REC_LCDDISP_EVF_MF=0x2bf,
UI_SETP_REC_LCDDISP_OVF=0x2c0,
UI_SETP_HISTOGRAM_STATUS=0x2c1,
UI_SETP_DIGIZOOM_STATUS=0x2c2,
UI_SETP_DIGIZOOM_POS=0x2c3,
UI_SETP_FACEDETECT=0x2c4,
UI_SETP_FACEDETECT_MOVIE=0x2c5,
UI_SETP_FACEDETECT_AC=0x2c6,
UI_SETP_EYE_AF=0x2c7,
UI_SETP_BLURREDUCTIONSET=0x2c8,
UI_SETP_DISPLAY_DEVICE=0x2c9,
UI_SETP_DISPLAY_REC=0x2ca,
UI_SETP_EYE_SENSOR=0x2cb,
UI_SETP_DISPLAY_PLAY=0x2cc,
UI_SETP_FLASH=0x2cd,
UI_SETP_FLASH_AUTO=0x2ce,
UI_SETP_FLASH_SR_AUTO=0x2cf,
UI_SETP_FLASH_SP_PORTRAIT=0x2d0,
UI_SETP_FLASH_SP_PORTRAIT_SOFT=0x2d1,
UI_SETP_FLASH_SP_BABY=0x2d2,
UI_SETP_FLASH_SP_BEAUTIFULSKIN=0x2d3,
UI_SETP_FLASH_SP_SPORTS=0x2d4,
UI_SETP_FLASH_SP_NIGHTSCAPE_TRIPOD=0x2d5,
UI_SETP_FLASH_SP_NIGHTSCAPE_HAND=0x2d6,
UI_SETP_FLASH_SP_NIGHTSCAPE_LONGSHUTTER=0x2d7,
UI_SETP_FLASH_SP_BLURREDUCTION=0x2d8,
UI_SETP_FLASH_MULTI_EXPO=0x2d9,
UI_SETP_FLASH_FILTER=0x2da,
UI_SETP_FLASH_PROGRAM=0x2db,
UI_SETP_FLASH_SHUTTER=0x2dc,
UI_SETP_FLASH_APERTURE=0x2dd,
UI_SETP_FLASH_MANUAL=0x2de,
UI_SETP_FLASH_SIMPLE_MANUAL=0x2df,
UI_SETP_FLASH_SP_BEACH=0x2e0,
UI_SETP_FLASH_SP_SNOW=0x2e1,
UI_SETP_FLASH_SP_UNDERWATER=0x2e2,
UI_SETP_FLASH_SP_SUNSET=0x2e3,
UI_SETP_FLASH_SP_TEXT=0x2e4,
UI_SETP_FLASH_SP_DOG=0x2e5,
UI_SETP_FLASH_SP_CAT=0x2e6,
UI_SETP_FLASH_SP_NPFL=0x2e7,
UI_SETP_FLASH_SP_PARTY=0x2e8,
UI_SETP_FLASH_SP_EXR_AUTO=0x2e9,
UI_SETP_FLASH_SP_EXR_FULL=0x2ea,
UI_SETP_FLASH_SP_EXR_MIX=0x2eb,
UI_SETP_FLASH_POPUP=0x2ec,
UI_SETP_MANNER_MODE=0x2ed,
UI_SETP_REC_LCDBRIGHT=0x2ee,
UI_SETP_3D2REC_SEQUENCE=0x2ef,
UI_SETP_TURNING_DIRECTION=0x2f0,
UI_SETP_TURNING_ANGLE=0x2f1,
UI_SETP_PLAY_DIRC_ERASE=0x2f2,
UI_SETP_CONTINUOUS_SETUP=0x2f3,
UI_SETP_CONT_AF_CHASE=0x2f4,
UI_SETP_CONTINUOUS_FPS=0x2f5,
UI_SETP_CONTINUOUS_FPS_BEF_S2=0x2f6,
UI_SETP_CONTINUOUS_FPS_CYCLE=0x2f7,
UI_SETP_CONTINUOUS_NUMBER=0x2f8,
UI_SETP_CONTINUOUS_NUMBER_CYCLE=0x2f9,
UI_SETP_CONTINUOUS_NUMBER_BEF_S2=0x2fa,
UI_SETP_CONTINUOUS_NUM16_BEF_S2=0x2fb,
UI_SETP_CONTINUOUS_NUM14_BEF_S2=0x2fc,
UI_SETP_CONTINUOUS_NUM8_BEF_S2=0x2fd,
UI_SETP_CONTINUOUS_NUM7_BEF_S2=0x2fe,
UI_SETP_PLAY_LCDDISP=0x2ff,
UI_SETP_PLAY_AUTOPLAY=0x300,
UI_SETP_PLAY_GETGPSINFO=0x301,
UI_SETP_WLAN_ROUTER_SEL=0x302,
UI_SETP_WLAN_SECURITY=0x303,
UI_SETP_PLAY_RAWDEVELOP=0x304,
UI_SETP_RAW_DEV_EXPOSURE=0x305,
UI_SETP_RAW_DEV_DRANGE=0x306,
UI_SETP_RAW_DEV_FSIM=0x307,
UI_SETP_RAW_DEV_WB=0x308,
UI_SETP_RAW_DEV_WB_KELVIN=0x309,
UI_SETP_RAW_DEV_CB_TUNING=0x30a,
UI_SETP_RAW_DEV_CB_TUNING_R=0x30b,
UI_SETP_RAW_DEV_CB_TUNING_B=0x30c,
UI_SETP_RAW_DEV_COLOR=0x30d,
UI_SETP_RAW_DEV_SHARPNESS=0x30e,
UI_SETP_RAW_DEV_NR=0x30f,
UI_SETP_RAW_DEV_HIGHLIGHT=0x310,
UI_SETP_RAW_DEV_SHADOW=0x311,
UI_SETP_RAW_DEV_LEQ=0x312,
UI_SETP_RAW_DEV_COLORSPACE=0x313,
UI_SETP_REC_DRANGE=0x314,
UI_SETP_EXIF_ISO=0x315,
UI_SETP_PLAY_REDEYE=0x316,
UI_SETP_PLAY_PC_SAVE=0x317,
UI_SETP_PLAY_PC_SAVE_PC1=0x318,
UI_SETP_PLAY_PC_SAVE_PC2=0x319,
UI_SETP_PLAY_PC_SAVE_PC3=0x31a,
UI_SETP_PLAY_PC_SAVE_PC4=0x31b,
UI_SETP_PLAY_PC_SAVE_PC5=0x31c,
UI_SETP_PLAY_PC_SAVE_PC6=0x31d,
UI_SETP_PLAY_GPSTAG=0x31e,
UI_SETP_PLAY_GPS=0x31f,
UI_SETP_PHOTOCOMPASS=0x320,
UI_SETP_IRDA=0x321,
UI_SETP_PLAY_PHOTOBOOK=0x322,
UI_SETP_PLAY_PHOTOBOOK_NEW=0x323,
UI_SETP_PLAY_PHOTOBOOK_PREVIEW=0x324,
UI_SETP_PLAY_PHOTOBOOK_SELECT=0x325,
UI_SETP_PLAY_SEARCH=0x326,
UI_SETP_PLAY_SEARCH_DATE=0x327,
UI_SETP_PLAY_SEARCH_UPLOAD=0x328,
UI_SETP_PLAY_SEARCH_GPS=0x329,
UI_SETP_PLAY_SEARCH_FACE=0x32a,
UI_SETP_PLAY_SEARCH_SP=0x32b,
UI_SETP_PLAY_SEARCH_TYPE=0x32c,
UI_SETP_PLAY_SEARCH_STAR=0x32d,
UI_SETP_PLAY_ERASE=0x32e,
UI_SETP_PLAY_ROTATE=0x32f,
UI_SETP_PLAY_DPOF=0x330,
UI_SETP_PLAY_UPLOAD=0x331,
UI_SETP_PLAY_PROTECT=0x332,
UI_SETP_PLAY_VOICE_MEMO=0x333,
UI_SETP_PLAY_COPY=0x334,
UI_SETP_PLAY_COPY_CAM2CARD=0x335,
UI_SETP_PLAY_COPY_CARD2CAM=0x336,
UI_SETP_PLAY_COPY_TYPE=0x337,
UI_SETP_PLAY_TRIMMING=0x338,
UI_SETP_PLAY_INFRARED=0x339,
UI_SETP_PLAY_BLOG=0x33a,
UI_SETP_PLAY_SETUP=0x33b,
UI_SETP_PLAY_RESIZE=0x33c,
UI_SETP_PLAY_DISPMODE=0x33d,
UI_SETP_SHOPDEMO=0x33e,
UI_SETP_COMMUNAL_FACILITY=0x33f,
UI_SETP_SIGHTSEEING_SPOT=0x340,
UI_SETP_LEISURE_SPOT=0x341,
UI_SETP_NO_GENRE=0x342,
UI_SETP_MY_SPOT=0x343,
UI_SET_LAST_READ_FULLPATH=0x344,
UI_SETP_PC_THROUGH_SCAN_DIR=0x345,
UI_SETP_PC_AV_SCAN_DIR=0x346,
UI_SETP_PC_THROUCH_EXPOSURE=0x347,
UI_SETP_PC_THROUCH_WB=0x348,
UI_SETP_PC_THROUCH_RGBGAIN=0x349,
UI_SETP_PC_THROUCH_AEAWB=0x34a,
UI_SETP_PC_VIDEOOUT=0x34b,
UI_SETP_PC_PRIORITY=0x34c,
UI_SETP_PC_MEDIAWRITE=0x34d,
UI_SETP_PC_REC_VIEW_CUSTOM=0x34e,
UI_SETP_PC_RGBGAIN=0x34f,
UI_SETP_PC_FNUMBER=0x350,
UI_SETP_PC_EXPOSURETIME=0x351,
UI_SETP_PC_STANBY=0x352,
UI_SETP_PC_POWER_CONTROL=0x353,
UI_SETP_PC_CUSTOM_MEMORY=0x354,
UI_SETP_PC_PTP_ERROR=0x355,
UI_SETP_PC_FIRMUP_STATUS=0x356,
UI_SETP_FLOCK_KEY_DRIVE=0x357,
UI_SETP_FLOCK_KEY_ISO=0x358,
UI_SETP_FLOCK_KEY_EXPOSURE=0x359,
UI_SETP_FLOCK_KEY_PHOTOMETRYMODE=0x35a,
UI_SETP_FLOCK_KEY_FOCUSMODE=0x35b,
UI_SETP_FLOCK_KEY_MFSW=0x35c,
UI_SETP_FLOCK_KEY_OISSW=0x35d,
UI_SETP_FLOCK_KEY_SHUTTER=0x35e,
UI_SETP_FLOCK_KEY_FNUM=0x35f,
UI_SETP_FLOCK_KEY_IRIS_AUTO=0x360,
UI_SETP_KEY_DRIVE=0x361,
UI_SETP_KEY_AM_LEVER=0x362,
UI_SETP_LENS_SW_STS=0x363,
UI_SETP_LENS_MF_STS=0x364,
UI_SETP_DPS_MENUY=0x365,
UI_SETP_FRAME_NO_MEM_DIR=0x366,
UI_SETP_FRAME_NO_MEM_FILE=0x367,
UI_SETP_REC_SETPARAM=0x368,
UI_SETP_KEEP_OPTZOOM_POS_M=0x369,
UI_SETP_KEEP_OPTZOOM_POS_A=0x36a,
UI_SETP_KEY_LOCK=0x36b,
UI_SETP_POWER_OFF_FLAG=0x36c,
UI_SETP_BACKUP_SUMID=0x36d,
UI_SETP_GPS_WLAN=0x36e,
UI_SETP_QUICK_MENU_POS=0x36f,
UI_SETP_PRE_PLAY=0x370,
UI_SETP_COPYRIGHT1=0x371,
UI_SETP_COPYRIGHT2=0x372,
UI_SETP_USERCOMMENT=0x373,
UI_SETP_LENS_OIS=0x374,
UI_SETP_LENS_SW=0x375,
UI_SETP_MF_CTL=0x376,
UI_SETP_LENS_MF_TYPE=0x377,
UI_SETP_REMOTE_REC=0x378,
UI_SETP_UNKNOWN379=0x379,
UI_SETP_MAX=0x37a
};
