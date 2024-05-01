#include "BlackScholes2D.h"

// Constructor
BlackScholes2D::BlackScholes2D(RandomGenerator* gen, double spot1, double spot2, double rate1, double rate2, double vol1, double vol2, double rho) : spot1(spot1), spot2(spot2), rate1(rate1), rate2(rate2), vol1(vol1), vol2(vol2), rho(rho), RandomProcess(gen, 2) {}

// Destructor
BlackScholes2D::~BlackScholes2D() {}