#include "RandomGenerator.h"
#include <cmath>

// Constructor
RandomGenerator::RandomGenerator() { }

// Destructor
RandomGenerator::~RandomGenerator() {}

// Accessors
// Return the current generated number
myLong RandomGenerator::GetCurrent()
{
	return Current;
}

// Methods
// Compute the mean of the generated numbers
double RandomGenerator::Mean(myLong nbSim)
{
	double result = 0.;
	for (myLong i = 0; i < nbSim; i++)
		result += Generate();
	return result / nbSim;
}

// Compute the standard deviation of the generated numbers
double RandomGenerator::Deviation(myLong nbSim)
{
	double mean = Mean(nbSim);
	double result = 0.;
	for (myLong i = 0; i < nbSim; i++)
		result += pow(Generate() - mean, 2);
	return result / (nbSim - 1);
}