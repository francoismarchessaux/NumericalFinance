#pragma once
#include "DiscreteGenerator.h"
#include "EcuyerCombined.h"

class Bernoulli : public DiscreteGenerator
{
	protected:
		double p;
		EcuyerCombined Uniform;

	public:
		// Constructor
		Bernoulli(double inputP);

		// Destructor
		~Bernoulli();

		// Methods
		double Generate();
};
