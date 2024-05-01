#include "BSEuler1D.h"

// Constructor
BSEuler1D::BSEuler1D(RandomGenerator* gen, double spot, double rate, double vol): BlackScholes1D(gen, spot, rate, vol) {}

// Destructor
BSEuler1D::~BSEuler1D(){}

// Methods
void simulate(double startTime, double endTime, size_t nbSteps)
{

}