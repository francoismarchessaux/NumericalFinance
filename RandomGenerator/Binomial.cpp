#include "Binomial.h"

// Constructor
Binomial::Binomial(myLong n, double p) : n(n), Bern(p) {}

// Destructor
Binomial::~Binomial() {}

// Methods
double Binomial::Generate()
{
	double result = 0;
	for (myLong i = 0; i < n; i++)
		result += Bern.Generate();
	return result;
}