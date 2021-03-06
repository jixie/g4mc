#ifndef G2P_TRANS484816R00_H
#define G2P_TRANS484816R00_H

#include "HRSTransBase.hh"

class G2PTrans484816R00 : public HRSTransBase
{
public:
    G2PTrans484816R00();
    ~G2PTrans484816R00();

    bool TransLeftHRS(double* vector_jjl);
    bool TransRightHRS(double* vector_jjl);
    void ReconLeftHRS(double* vector_jjl);
    void ReconRightHRS(double* vector_jjl);

    double GetAngle() { return cModelAngle; }

    void FPCorrLeft(const double* V5tg, double* V5fp);
    void FPCorrRight(const double* V5tg, double* V5fp);

private:
    const double cModelAngle;
};

#endif
