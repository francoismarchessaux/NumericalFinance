#include "FiniteSet.h"

// Constructor
FiniteSet::FiniteSet(const std::vector<double>& inputProb) : Uniform()
{
	double sumProba = 0;
	for (size_t i = 0; i < inputProb.size(); ++i)
	{
		double currentProb = inputProb[i];
		if (currentProb < 0 || currentProb > 1)
			throw std::exception("A probability must be between [0, 1]");
		else
			sumProba += currentProb;
	}
	if (sumProba != 1)
		throw std::exception("The sum of probabilities must be equal to 1");

	Probabilities = inputProb;
}

// Destructor
FiniteSet::~FiniteSet() {}

// Methods
double FiniteSet::Generate()
{
	double U = Uniform.Generate();
	double cumulativeProb = 0;
	double k = 0;

	for (size_t i = 0; i < Probabilities.size(); ++i)
	{
		cumulativeProb += Probabilities[i];
		if (U < cumulativeProb)
			k++;
	}
	
	return k;
}