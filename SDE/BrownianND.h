#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include <vector>

class BrownianND : public RandomProcess
{
    protected:
        std::vector<std::vector<double> >* correlationMatrix;
        std::vector<SinglePath> paths;

    public:
        // Constructor
        BrownianND(RandomGenerator* gen, int dim, std::vector<std::vector<double> >* corr);
        
        // Destructor
        ~BrownianND();

        // Methods
        void simulate(double startTime, double endTime, size_t nbSteps);
};