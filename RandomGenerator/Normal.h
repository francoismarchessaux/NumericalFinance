#pragma once
#include "ContinuousGenerator.h"
#include "EcuyerCombined.h"

class Normal : public ContinuousGenerator
{
	protected:
		double Mu;
		double Sigma;
		EcuyerCombined Uniform;
		EcuyerCombined Uniform2;

	public:
		// Constructor
		Normal(double mu, double sigma);

		// Destructor
		~Normal();
};

class NormalBoxMuller : public Normal
{
	private:
		bool requireNewSimulation;
		double X;
		double Y;

	public:
		// Constructor
		NormalBoxMuller(double mu, double sigma);
		
		// Destructor
		~NormalBoxMuller();

		// Methods
		double Generate();
};

class NormalCLT : public Normal
{
	public:
		//Constructor
		NormalCLT(double mu, double sigma);

		// Destructor
		~NormalCLT();

		// Methods
		double Generate();
};

class NormalRejectionSampling : public Normal
{
	public:
		// Constructor
		NormalRejectionSampling(double mu, double sigma);

		// Destructor
		~NormalRejectionSampling();

		// Methods
		double Generate();
};