#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include "BlackScholes2D.h"
#include <vector>

class BSMilstein2D : public BlackScholes2D
{
    public:
        // Constructor
        BSMilstein2D(RandomGenerator* gen, double spot1, double spot2, double rate1, double rate2, double vol1, double vol2, double rho);
        
        // Destructor
        ~BSMilstein2D();
        
        // Methods
        void simulate(double startTime, double endTime, size_t nbSteps);
};