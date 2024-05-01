#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include "BlackScholes1D.h"
#include <vector>

class BSMilstein1D : public BlackScholes1D
{
    public:
        // Constructor
        BSMilstein1D(RandomGenerator* gen, double spot, double rate, double vol);
        
        // Destructor
        ~BSMilstein1D();

        // Methods
        void simulate(double startTime, double endTime, size_t nbSteps);
};