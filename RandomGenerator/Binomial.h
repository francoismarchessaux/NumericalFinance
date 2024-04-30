#pragma once
#include "DiscreteGenerator.h"
#include "Bernoulli.h"

class Binomial : public DiscreteGenerator
{
	protected:
		myLong n;
		Bernoulli Bern;

	public:
		// Constructor
		Binomial(myLong n, double p);

		// Destructor
		~Binomial();

		// Methods
		double Generate();
};