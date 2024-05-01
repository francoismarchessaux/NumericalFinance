#include "Exponential.h"
#include <exception>

// -- Exponential --
// Constructor
Exponential::Exponential(double inputLambda) : Uniform(), Uniform2()
{
	if (inputLambda <= 0)
		throw std::exception("Lambda must be strictly positive for Exponential distribution");
	Lambda = inputLambda;
}

// Destructor
Exponential::~Exponential() {}

// -- Exponential Inverse Distribution --
// Constructor
ExponentialInverseDistribution::ExponentialInverseDistribution(double inputLambda) : Exponential(inputLambda) {}

// Destructor
ExponentialInverseDistribution::~ExponentialInverseDistribution() {}

// Methods
double ExponentialInverseDistribution::Generate()
{
	return -log(Uniform.Generate()) / Lambda;
}

// -- Exponential Rejection Sampling --
// Constructor
ExponentialRejectionSampling::ExponentialRejectionSampling(double inputLambda) : Exponential(inputLambda) {}

// Destructor
ExponentialRejectionSampling::~ExponentialRejectionSampling() {}

// Methods
double ExponentialRejectionSampling::Generate()
{
	double M = Lambda;
	double X = 0.;
	double Y = 0.;

	do
	{
		double X = Uniform.Generate();
		double Y = M * Uniform2.Generate();
	} while (Y > Lambda * exp(- Lambda * X));
	return X;
}