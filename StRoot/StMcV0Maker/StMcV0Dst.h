#ifndef StMcV0Dst_def
#define StMcV0Dst_def

#define MAX_NUM_McV0  3000
struct StMcV0Dst{ 
   int runnumber;
   int evtnumber;
   int nrefmult;
   int nrefmultftpceast;
   int centBin9;
   int centBin16;
   float primvertexX;
   float primvertexY;
   float primvertexZ;
   float magn;
   int nmcv0;
   int nv0;

   float mcv0pt[MAX_NUM_McV0];
   float mcv0px[MAX_NUM_McV0];
   float mcv0py[MAX_NUM_McV0];
   float mcv0pz[MAX_NUM_McV0];
   float mcv0rapidity[MAX_NUM_McV0];
   int   mcv0id[MAX_NUM_McV0];
   float mcv0x[MAX_NUM_McV0];
   float mcv0y[MAX_NUM_McV0];
   float mcv0z[MAX_NUM_McV0];
   
   //StMcV0Data v0[1000]; 
   int   v0mcid[MAX_NUM_McV0];
   int   v0mcstverid[MAX_NUM_McV0];
   float v0mass[MAX_NUM_McV0];
   float v0pt[MAX_NUM_McV0];
   float v0rapidity[MAX_NUM_McV0];
   float v0eta[MAX_NUM_McV0];
   float v0x[MAX_NUM_McV0];
   float v0y[MAX_NUM_McV0];
   float v0z[MAX_NUM_McV0];
   float v0px[MAX_NUM_McV0];
   float v0py[MAX_NUM_McV0];
   float v0pz[MAX_NUM_McV0];
   
   float v0declen[MAX_NUM_McV0];
   float v0dca[MAX_NUM_McV0];
   float v0dca2d[MAX_NUM_McV0];
   int   dau1id[MAX_NUM_McV0];
   int   dau2id[MAX_NUM_McV0];
   float dau1dca[MAX_NUM_McV0];
   float dau1dca2d[MAX_NUM_McV0];
   int dau1nhits[MAX_NUM_McV0];
   float dau1dedx[MAX_NUM_McV0];
   float dau1nsigma[MAX_NUM_McV0];
   float dau1pt[MAX_NUM_McV0];
   float dau1px[MAX_NUM_McV0];
   float dau1py[MAX_NUM_McV0];
   float dau1pz[MAX_NUM_McV0];
   int dau1tpc[MAX_NUM_McV0];
   int dau1ssd[MAX_NUM_McV0];
   int dau1svt[MAX_NUM_McV0];
   float dau2dca[MAX_NUM_McV0];
   float dau2dca2d[MAX_NUM_McV0];
   int dau2nhits[MAX_NUM_McV0];
   float dau2dedx[MAX_NUM_McV0];
   float dau2nsigma[MAX_NUM_McV0];
   float dau2pt[MAX_NUM_McV0];
   float dau2px[MAX_NUM_McV0];
   float dau2py[MAX_NUM_McV0];
   float dau2pz[MAX_NUM_McV0];
   int dau2tpc[MAX_NUM_McV0];
   int dau2ssd[MAX_NUM_McV0];
   int dau2svt[MAX_NUM_McV0];
   float dca1to2[MAX_NUM_McV0];
};

#endif
