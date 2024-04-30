#include "Bernoulli.h"

// Constructor
Bernoulli::Bernoulli(double inputP) : p(inputP), Uniform() {}

// Destructor
Bernoulli::~Bernoulli() {}

// Methods
double Bernoulli::Generate()
{
	return (Uniform.Generate() <= p);
}