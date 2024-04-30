#include "Poisson.h"
#include <exception>
#include <cmath>

// -- Poisson --
// Constructor
Poisson::Poisson(double lambda) : Uniform(), Exp(lambda)
{
	if (lambda <= 0)
		throw std::exception("Lambda must be strictly positive for Poisson distribution");
	Lambda = lambda;
}

// Destructor
Poisson::~Poisson() {}

// Methods
myLong Poisson::Factorial(myLong n)
{
	return (n == 1 || n == 0) ? 1 : Factorial(n - 1) * n;
}

// -- Poisson 1st Algo --
// Constructor
PoissonFirstAlgo::PoissonFirstAlgo(double lambda) : Poisson(lambda) {}

// Destructor
PoissonFirstAlgo::~PoissonFirstAlgo() {}

// Methods
double PoissonFirstAlgo::Generate()
{
	double U = Uniform.Generate();
	double P = exp(-Lambda);
	double cumulativeProb = 0;
	double k = 0;

	while (U > cumulativeProb)
	{
		P += (Lambda / k) * exp(-Lambda) * (pow(Lambda, k - 1) / Factorial(k - 1));
		k ++;
	}
	return k;
}

// -- Poisson 2nd Algo --
// Constructor
PoissonSecondAlgo::PoissonSecondAlgo(double lambda) : Poisson(lambda) {}

// Destructor
PoissonSecondAlgo::~PoissonSecondAlgo() {}

// Methods
double PoissonSecondAlgo::Generate()
{
	double cumulativeProb = 0;
	size_t k = 0;

	while (cumulativeProb <= 1)
	{
		double Y = Exp.Generate();
		cumulativeProb += Y;
		if (cumulativeProb <= 1)
			k++;
	}
	return k;
}