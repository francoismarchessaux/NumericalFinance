#pragma once
#include "PseudoGenerator.h"

class LinearCongruential :public PseudoGenerator
{
	private:
		myLong Multiplier;
		myLong Increment;
		myLong Modulus;

	public:
		// Constructor
		LinearCongruential();
		LinearCongruential(myLong Multiplier, myLong Increment, myLong Modulus, myLong Seed);

		// Destructor
		~LinearCongruential();

		// Methods
		double Generate();
};