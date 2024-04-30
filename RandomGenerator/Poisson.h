#pragma once
#include "DiscreteGenerator.h"
#include "EcuyerCombined.h"
#include "Exponential.h"

class Poisson : public DiscreteGenerator
{
	protected:
		double Lambda;
		EcuyerCombined Uniform;
		ExponentialInverseDistribution Exp;
		myLong Factorial(myLong n);

	public:
		// Constructor
		Poisson(double lambda);

		// Destructor
		~Poisson();
};

class PoissonFirstAlgo : public Poisson
{
	public:
		// Constructor
		PoissonFirstAlgo(double lambda);

		// Destructor
		~PoissonFirstAlgo();

		// Methods
		double Generate();
};

class PoissonSecondAlgo : public Poisson
{
	public:
		// Constructor
		PoissonSecondAlgo(double lambda);

		// Destructor
		~PoissonSecondAlgo();

		// Methods
		double Generate();
};