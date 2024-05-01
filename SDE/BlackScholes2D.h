#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include <vector>

class BlackScholes2D : public RandomProcess
{
    protected:
        double spot1, spot2;
        double rate1, rate2;
        double vol1, vol2;
        double rho;

    public:
        // Constructor
        BlackScholes2D(RandomGenerator* gen, double spot1, double spot2, double rate1, double rate2, double vol1, double vol2, double rho);
        
        // Destructor
        ~BlackScholes2D();
};