//UI_EVTID
enum UI_EVTID {
UI_STILL=0x100,
UI_INTERNAL=0x110,
REC_STILL_SELFTIMER=0x120,
WHEEL_DIAL=0x130,
COMMAND_DIAL=0x140,
COMMAND_LEVER=0x150,
INTERVAL_STILL=0x160,
UI_STILL_FOCUS_PRIORITY=0x170,
SYS_INIT=0x1000000,
SYS_DEINIT=0x1010000,
SYS_POWER=0x1020000,
SYS_WRITE_RTC=0x1030000,
SYS_SELECT_SCREEN=0x1040000,
SYS_BEEP=0x1050000,
SYS_BODYTUBE=0x1060000,
SYS_FORMAT=0x1070000,
SYS_DISCHARGE_BATTERY=0x1080000,
SYS_SETPARAM=0x1090000,
SYS_SEND_EV=0x10a0000,
SYS_AVOUT=0x10b0000,
SYS_FINDERSHUTTER=0x10c0000,
SYS_DUST_REDUCTION=0x10d0000,
SETUP_INIT=0x10e0000,
SETUP_DISPLAY=0x10f0000,
SETUP_DEINIT=0x1100000,
FMODE_START=0x1110000,
UPDATE_INIT=0x1120000,
UPDATE_DEINIT=0x1130000,
UPDATE_START=0x1140000,
UPDATE_WRITE=0x1150000,
SYS_DSC_SLEEP=0x1160000,
SYS_EXT_MICROPHONE=0x1170000,
SYS_SOUND_LEVEL=0x1180000,
SYS_LENS_POWER=0x1190000,
SYS_LENS_DATA=0x11a0000,
SYS_LENS_KEY=0x11b0000,
REC_INIT=0x2000000,
REC_DEINIT=0x2010000,
REC_CHARGE_FLASH=0x2020000,
REC_CONTINUOUS=0x2030000,
REC_CWB=0x2040000,
PCREC_CWB=0x2050000,
REC_MF=0x2060000,
REC_RTMF=0x2070000,
REC_SNAPMF=0x2080000,
REC_MOVIE=0x2090000,
REC_ONEPUSH_AF=0x20a0000,
REC_S1=0x20b0000,
REC_S1OFF=0x20c0000,
REC_SETPARAM=0x20d0000,
REC_SINGLE=0x20e0000,
REC_VIEW=0x20f0000,
REC_ZOOM=0x2100000,
REC_LIVE=0x2110000,
REC_MOVE_CHASE=0x2120000,
REC_IMAGE_BUFFER_CLEAR=0x2130000,
REC_PREVIEW=0x2140000,
PB_INIT=0x4000000,
PB_DEINIT=0x4010000,
PB_SELECT=0x4020000,
PB_DATE_SELECT=0x4030000,
PB_SEARCH_SELECT=0x4040000,
PB_STILL=0x4050000,
PB_TRIMMING=0x4060000,
PB_MOVIE=0x4070000,
PB_VOICE=0x4080000,
PB_POSTREC_VOICE=0x4090000,
PB_DELETE=0x40a0000,
PB_DELETE_SELECT=0x40b0000,
PB_MULTI_SELECT=0x40c0000,
PB_DATE_DELETE=0x40d0000,
PB_SEARCH_DELETE=0x40e0000,
PB_PROTECT=0x40f0000,
PB_DATE_PROTECT=0x4100000,
PB_SEARCH_PROTECT=0x4110000,
PB_DPOF=0x4120000,
PB_DPOF_ALL=0x4130000,
PB_DELETE_DPOF=0x4140000,
PB_SEARCH_DELETE_DPOF=0x4150000,
PB_DATE_DELETE_DPOF=0x4160000,
PB_HISTOGRAM=0x4170000,
PB_SELECT_DPOF=0x4180000,
PB_DATE=0x4190000,
PB_ROTATE=0x41a0000,
PB_HIGHLIGHT=0x41b0000,
PB_COPY=0x41c0000,
PB_FACE_SELECT=0x41d0000,
PB_SEARCH_FACE_SELECT=0x41e0000,
PB_DATE_FACE_SELECT=0x41f0000,
PB_FACE_STILL=0x4200000,
PB_RED_EYE=0x4210000,
PB_YC=0x4220000,
PB_SEARCH=0x4230000,
PB_STAR_APPEND=0x4240000,
PB_PHOTOBOOK=0x4250000,
PB_VERTICAL=0x4260000,
PB_SCROLL=0x4270000,
PB_RAW_CONVERT=0x4280000,
PB_UPLOAD=0x4290000,
PB_GPSTAG=0x42a0000,
PB_CONT_SUB=0x42b0000,
PB_CONT_SELECT=0x42c0000,
PB_DELETE_CHECK=0x42d0000,
PB_STILL_ANIME=0x42e0000,
PB_SELECT_SCREEN=0x42f0000,
PB_UPDATE=0x4300000,
VENDOR_INIT=0x8000000,
VENDOR_DEINIT=0x8010000,
START_NEGO=0x8020000,
STOP_NEGO=0x8030000,
DPS_INIT=0x8040000,
DPS_DEINIT=0x8050000,
DPS_START_CONNECT=0x8060000,
DPS_STOP_CONNECT=0x8070000,
DPS_START_JOB=0x8080000,
DPS_CONTINUE_JOB=0x8090000,
DPS_ABORT_JOB=0x80a0000,
PB_DPS_INIT=0x80b0000,
PB_DPS_DEINIT=0x80c0000,
PB_DPS_ANALYZE=0x80d0000,
SHOOTING_CONNECT=0x80e0000,
SHOOTING_DUMMY=0x80f0000,
IRDA_INIT=0x9000000,
IRDA_DEINIT=0x9010000,
IRDA_CONNECT=0x9020000,
IRDA_DISCONNECT=0x9030000,
IRDA_CONVERT=0x9040000,
IRDA_SEND=0x9050000,
IRDA_RECV=0x9060000,
IRDA_STILL=0x9070000,
IRDA_STORE=0x9080000,
WLAN_INIT=0xa000000,
WLAN_DEINIT=0xa010000,
WLAN_CONNECT=0xa020000,
WLAN_CHANGE_MODE=0xa030000,
WLAN_DISCONNECT=0xa040000,
WLAN_SEND=0xa050000,
WLAN_VIEWER_START=0xa060000,
WLAN_VIEWER_END=0xa070000,
WLAN_GET_GPS=0xa080000,
WLAN_ABORT=0xa090000,
WLAN_SUSPEND=0xa0a0000,
WLAN_RESUME=0xa0b0000,
WLAN_AP_SCAN=0xa0c0000,
WLAN_AP_JOIN=0xa0d0000,
WLAN_PC_SEARCH=0xa0e0000,
WLAN_PC_REGISTER=0xa0f0000,
WLAN_AP_WPS=0xa100000,
WLAN_PC_BACKUP=0xa110000,
WLAN_PB_LCDBL=0xa120000,
INSTAX_INIT=0xa130000,
INSTAX_DEINIT=0xa140000,
INSTAX_AP_JOIN=0xa150000,
INSTAX_SEND=0xa160000,
INSTAX_ABORT=0xa170000
};