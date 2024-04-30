#pragma once
#include "ContinuousGenerator.h"
#include "EcuyerCombined.h"

class Exponential : public ContinuousGenerator
{
	protected:
		double Lambda;
		EcuyerCombined Uniform;
		EcuyerCombined Uniform2;

	public:
		// Constructor
		Exponential(double lambda);

		// Destructor
		~Exponential();
};

class ExponentialInverseDistribution : public Exponential
{
	public:
		// Constructor
		ExponentialInverseDistribution(double lambda);

		// Destructor
		~ExponentialInverseDistribution();

		// Methods
		double Generate();
};

class ExponentialRejectionSampling : public Exponential
{
	public:
		// Constructor
		ExponentialRejectionSampling(double lambda);

		// Destructor
		~ExponentialRejectionSampling();

		// Methods
		double Generate();
};