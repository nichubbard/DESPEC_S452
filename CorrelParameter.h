// parameter holding data needed for correlation routine

#ifndef CORRELPAR_H
#define CORRELPAR_H

#include "Go4StatusBase/TGo4Parameter.h"
#include <iomanip>
#include <fstream>
class CorrelParameter : public TGo4Parameter {

public:
          CorrelParameter();
          CorrelParameter(const Text_t* name);
  virtual ~CorrelParameter();
  Int_t    PrintParameter(Text_t *buf, Int_t);
  Bool_t   UpdateFrom(TGo4Parameter *);
  int      IsData(std::ifstream &f);

  ///Define correlations of interest
 Bool_t GSetup_corr_FRS_Ge, GSetup_corr_FRS_Gamma_Gamma, GSetup_corr_FRS_Ge_long, GSetup_corr_FRS_fat, GSetup_corr_FRS_Aida ;
 Bool_t GSetup_corr_FRS_Fatima_LT;
 Bool_t GSetup_corr_Beta_Gamma, GSetup_corr_Beta_Gamma_Gamma, GSetup_corr_Beta_Gamma_Fatima, GSetup_corr_Beta_Gamma_Fatima_LT;
 
 Int_t GZ1Z2_Gate;
 
 //Gamma SCI41 Time Gate
 Float_t GGe_SCI41_High, GGe_SCI41_Low;
 ///Gamma Gamma Germanium Time Gate
 Int_t GGe1_Ge2_Low, GGe1_Ge2_High;
 
 Float_t GGe1_Ge2_HistoBin, GGe1_Ge2_HistoMin, GGe1_Ge2_HistoMax;
 
  ///Gamma Gamma Fatima Time Gate
 Int_t GFat1_Fat2_Low, GFat1_Fat2_High;
 
   ///Define Long isomer Ge conditions
 //Int_t GLongGate;
 Int_t GLongIso_PID_Gate;
 Int_t GFRS_Ge_LongIso_THigh, GFRS_Ge_LongIso_TLow, GFRS_Ge_LongIso_HBin,GFRS_Ge_LongIso_HLow, GFRS_Ge_LongIso_HHigh, GFRS_Ge_LongIso_TScale ;
 Bool_t GSetup_corr_FRS_Ge_LongIso_incprmt;
 
 
 ///Lifetime Fatima prompt gamma conditions
 Int_t GPID_Gate_FRS_Fatima_LT;
 Int_t GFRSFat_LT1LowStart, GFRSFat_LT1HighStart, GFRSFat_LT2LowStart, GFRSFat_LT2HighStart, GFRSFat_LT3LowStart, GFRSFat_LT3HighStart;
 Int_t GFRSFat_LT1LowStop, GFRSFat_LT1HighStop, GFRSFat_LT2LowStop, GFRSFat_LT2HighStop, GFRSFat_LT3LowStop, GFRSFat_LT3HighStop;

 ///Define Beta-delayed gamma conditions
 Int_t GBDG_FRS_Gate;
 
 Float_t GAidaImpDecT_Low, GAidaImpDecT_High;
 Float_t GAidaImpDecT_HBin;
 
 Int_t GAidaFB_dT, GAidaFB_dE;
 
 Int_t GAIDA_DecEFront, GAIDA_DecEBack;
 
 Int_t GAida_Ge_WRdT_Low, GAida_Ge_WRdT_High;
 
 Int_t GAida_Fat_WRdT_Low, GAida_Fat_WRdT_High;
 
 ///Lifetime Fatima Beta-delayed gamma conditions
 Int_t GPID_Gate_Beta_Gamma_Fatima_LT;
 Int_t GBDGFat_LT1LowStart, GBDGFat_LT1HighStart, GBDGFat_LT2LowStart, GBDGFat_LT2HighStart;
 Int_t GBDGFat_LT1LowStop, GBDGFat_LT1HighStop, GBDGFat_LT2LowStop, GBDGFat_LT2HighStop;

  ///Define other conditions 

 Int_t GFat_TRawgate_low, GFat_TRawgate_high;
 Int_t GFRS_Fat_TLow, GFRS_Fat_THigh;
 Int_t GFRS_Ge_TLow, GFRS_Ge_THigh;

 Int_t GFRS_AIDA_TLow, GFRS_AIDA_THigh;
 Int_t GAIDA_Imp_bPlas_TLow, GAIDA_Imp_bPlas_THigh;
 Int_t GAIDA_bPlas_TLow, GAIDA_bPlas_THigh;
 Int_t GbPlast_Egate_low, GbPlast_Egate_high;
// Int_t GbPlast_GAL_TLow, GbPlast_GAL_THigh;
 


// Bool_t GFRS_AIDA_DSSD1,  GFRS_AIDA_DSSD2, GFRS_AIDA_DSSD3;
//  Double_t Aff[60], Bff[60];
//  Double_t Ab[32], Bb[32];
//  Double_t Ag[4], Bg[4];

ClassDef(CorrelParameter,6)
};

#endif
