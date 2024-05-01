#include "BSMilstein2D.h"

// Constructor
BSMilstein2D::BSMilstein2D(RandomGenerator* gen, double spot1, double spot2, double rate1, double rate2, double vol1, double vol2, double rho) : BlackScholes2D(gen, spot1, spot2, rate1, rate2, vol1, vol2, rho) {}

// Destructor
BSMilstein2D::~BSMilstein2D() {}

// Methods
void BSMilstein2D::simulate(double startTime, double endTime, size_t nbSteps)
{}