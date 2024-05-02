#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include "BlackScholes1D.h"
#include <vector>

class BSEuler1D : public BlackScholes1D
{
    public:
        // Constructor
        BSEuler1D(RandomGenerator* gen, double spot, double rate, double vol);
        
        // Destructor
        ~BSEuler1D();

        // Methods
        void simulate(double startTime, double endTime, size_t nbSteps);
};