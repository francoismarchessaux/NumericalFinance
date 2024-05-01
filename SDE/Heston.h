#pragma once
#include "RandomGenerator.h"
#include "RandomProcess.h"
#include <vector>

class Heston : public RandomProcess
{
    protected:
        double spot;
        double initVariance;
        double mu;
        double theta;
        double kappa;
        double sigma;
        double rho;

    public:
        // Constructor
        Heston(RandomGenerator* gen, double spot, double initVariance, double mu, double theta, double kappa, double sigma, double rho);
        
        // Destructor
        ~Heston();

        // Methods
        void simulate(double startTime, double endTime, size_t nbSteps);
};