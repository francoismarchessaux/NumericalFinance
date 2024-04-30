#pragma once
#include "UniformGenerator.h"

class PseudoGenerator : public UniformGenerator
{
	protected:
		myLong Seed;

	public:
		// Constructor
		PseudoGenerator();
		PseudoGenerator(myLong inputSeed);

		// Destructor
		~PseudoGenerator();
};