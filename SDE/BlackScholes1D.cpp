#include "BlackScholes1D.h"

// Constructor
BlackScholes1D::BlackScholes1D(RandomGenerator* gen, double spot, double rate, double vol) : spot(spot), rate(rate), vol(vol), RandomProcess(gen, 1) {}

// Destructor
BlackScholes1D::~BlackScholes1D(){}