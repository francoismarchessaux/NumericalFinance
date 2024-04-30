#pragma once
#include "DiscreteGenerator.h"
#include "EcuyerCombined.h"
#include <vector>

class FiniteSet : public DiscreteGenerator
{
	protected:
		std::vector<double> Probabilities;
		EcuyerCombined Uniform;

	public:
		// Constructor
		FiniteSet(const std::vector<double>& inputProb);

		// Destructor
		~FiniteSet();

		// Methods
		double Generate();
};