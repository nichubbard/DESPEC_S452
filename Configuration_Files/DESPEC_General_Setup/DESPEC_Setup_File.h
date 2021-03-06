///Should be set for each experiment depending upon configuration
#ifndef DESPEC_SETUP_FILE
#define DESPEC_SETUP_FILE

///Note that channels start from 0

#define WHITE_RABBIT_ENABLED 1

///Use FRS MHTDC for Analysis (1) or NIM TAC (0)
#define MHTDC_OR_TAC 0
///Use FRS angle corrected A/Q for Analysis (1) or none-corrected (0)
#define FRS_CORR 0
///For Z1 Z2 AND X A/Q Gate: Use FRS X2 vs A/Q (1) OR X4 vs A/Q (0) 
#define X2_or_X4 1

#define FRS_MIN_AoQ 1.6
#define FRS_MAX_AoQ 2.2
#define FRS_MIN_Z 0
#define FRS_MAX_Z 10

///Define number of FRS gates and Polygon Points
#define MAX_FRS_GATE 8
#define MAX_FRS_PolyPoints 6

#define FINGER_TAMEX_MODULES 4
#define FINGER_TAMEX_HITS    512

///FATIMA VME 
#define FAT_TDC_NUMBER 2
#define SCALER_MODULE_ON 1
#define FAT_MAX_VME_CHANNELS 50 
#define FAT_TDC_REF_CHANNEL 1
#define FAT_VME_MAX_MULTI 50
#define SC41L_FatVME  48
#define SC41R_FatVME  49
#define SC41L_FatVME_Digi  48
#define SC41R_FatVME_Digi  49

#define FatVME_TimeMachineCh1 36
#define FatVME_TimeMachineCh2 37
#define FatVME_bPlast_MASTER 45
///FATIMA TAMEX
#define FATIMA_TAMEX_MODULES 4
#define FATIMA_TAMEX_HITS 50
#define FATIMA_TAMEX_CHANNELS 64
#define FATIMA_TAMEX_SC41L  48
#define FATIMA_TAMEX_SC41R  49
#define FATIMA_TAMEX_SC41L_Digi  48
#define FATIMA_TAMEX_SC41R_Digi  49
#define FatTAMEX_TimeMachineCh1 40
#define FatTAMEX_TimeMachineCh2 41

///bPLASTIC 
#define bPLASTIC_TAMEX_MODULES 4
#define bPLASTIC_TAMEX_HITS 10
#define bPLASTIC_TAMEX_CHANNELS 16
///bPlastic number of channels per detector 
#define bPLASTIC_CHAN_PER_DET 20
///bPlast Additional signals Module Num
#define bPLASTIC_ADDITIONAL_CH_MOD 3
///bPlast Additional signals Channel Num
#define SC41L_bPLASTIC 1
#define SC41R_bPLASTIC 2
#define SC41L_bPLASTIC_Digi 3
#define SC41R_bPLASTIC_Digi 4
#define bPLASTIC_OR_UP_DOWN 5
#define bPLASTIC_UP_COIN 6
#define bPLASTIC_DOWN_COIN 7
///bPlast Time Machine Board Num/Channels
#define bPlastTimeMachineBoard 1
#define bPlastTimeMachineCh1 1
#define bPlastTimeMachineCh2 2
///bPlastic refence channels
#define bPlastRefCh_Det1 0
#define bPlastRefCh_Det2 0
#define bPlastRefCh_Det3 0

///FIBRE
#define FIBRE_BOARD 3

///Germanium (including additonal channel detectors (e.g.SC41 det)
#define Germanium_MAX_DETS 11
#define Germanium_CRYSTALS 3
#define Germanium_MAX_HITS (Germanium_MAX_DETS * Germanium_CRYSTALS)
///Important for FEBEX
#define Germanium_FEBEX_MODULES 2
#define Germanium_MAX_CHANNELS 49
///Define here where SC41 is plugged into FEBEX ("Detector" and "crystal" for mapping purposes) Use the germanium allocation file for mapping of this
#define Germanium_SC41_Det 7
#define Germanium_SC41L_Crystal 0
#define Germanium_SC41R_Crystal 1
#define Germanium_SC41_Det_Digi 7
#define Germanium_SC41L_Crystal_Digi 0
#define Germanium_SC41R_Crystal_Digi 1
#define Germanium_TimeMachine_Det 1
#define Germanium_TimeMachineCh1 0
#define Germanium_TimeMachineCh2 1

#define AIDA_MAX_HITS 10000

#endif /* DESPEC_SETUP_FILE */
