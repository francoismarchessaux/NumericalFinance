#include "Normal.h"
#include <exception>
#include <cmath>

const long double PI = 3.141592653589793238L;

// -- Normal --
// Constructor
Normal::Normal(double mu, double sigma) : Mu(mu), Uniform(), Uniform2()
{
	if (sigma < 0)
		throw std::exception("The variance must be strictly positive for Normal distribution");
	Sigma = sigma;
}

// Destructor
Normal::~Normal() {}


// -- Normal Box Muller --
// Constructor
NormalBoxMuller::NormalBoxMuller(double mu, double sigma) : Normal(mu, sigma) {}

// Destructor
NormalBoxMuller::~NormalBoxMuller() {}

// Methods
double NormalBoxMuller::Generate()
{
	if (requireNewSimulation)
	{
		double R = sqrt(-2.0 * log(Uniform.Generate()));
		double Theta = 2.0 * PI * Uniform2.Generate();

		X = R * cos(Theta);
		Y = R * sin(Theta);

		requireNewSimulation = false;

		return Mu + Sigma * X;
	}
	else
	{
		requireNewSimulation = true;
		return Mu + Sigma * Y;
	}
}


// -- Normal CLT
// Constructor
NormalCLT::NormalCLT(double mu, double sigma) : Normal(mu, sigma) {}

// Destructor
NormalCLT::~NormalCLT() {}

// Methods
double NormalCLT::Generate()
{
	const int n_simulations = 12;
	double sum = 0;

	for (size_t i = 0; i < n_simulations; i++)
	{
		sum += Uniform.Generate();
	}

	double standardNormal = sum - 6;
	return Mu + Sigma * standardNormal;
}


// -- Normal Rejection Sampling
// Constructor
NormalRejectionSampling::NormalRejectionSampling(double mu, double sigma) : Normal(mu, sigma) {}

// Destructor
NormalRejectionSampling::~NormalRejectionSampling() {}

// Methods
double NormalRejectionSampling::Generate()
{
	throw std::exception("The rejection sampling method is not implemented yet for Normal distribution");
}