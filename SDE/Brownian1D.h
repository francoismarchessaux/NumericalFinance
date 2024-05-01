#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include <vector>

class Brownian1D : public RandomProcess
{
    public:
        // Constructor
        Brownian1D(RandomGenerator* gen);
        
        // Destructor
        ~Brownian1D();

        // Methods
        void simulate(double startTime, double endTime, size_t nbSteps);
};