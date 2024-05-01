#include "BSMilstein1D.h"

// Constructor
BSMilstein1D::BSMilstein1D(RandomGenerator* gen, double spot, double rate, double vol) : BlackScholes1D(gen, spot, rate, vol) {}

// Destructor
BSMilstein1D::~BSMilstein1D(){}

// Methods
void BSMilstein1D::simulate(double startTime, double endTime, size_t nbSteps) 
{}