#include "BrownianND.h"
#include "Brownian1D.h"

// Constructor
BrownianND::BrownianND(RandomGenerator* gen, int dim, std::vector<std::vector<double> >* corr): RandomProcess(gen, dim), correlationMatrix(corr){}

// Destructor
BrownianND::~BrownianND() {}

// Methods
void BrownianND::simulate(double startTime, double endTime, size_t nbSteps)
{
    std::vector<SinglePath> paths;

}