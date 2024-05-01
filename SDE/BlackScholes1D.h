#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include <vector>

class BlackScholes1D : public RandomProcess
{
    protected:
        double spot;
        double rate;
        double vol;

    public:
        // Constructor
        BlackScholes1D(RandomGenerator* gen, double spot, double rate, double vol);

        // Destructor
        ~BlackScholes1D();
};
