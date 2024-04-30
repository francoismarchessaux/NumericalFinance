#include "LinearCongruential.h"

// Constructor
LinearCongruential::LinearCongruential() : PseudoGenerator(27), Multiplier(17), Increment(43), Modulus(100) {}
LinearCongruential::LinearCongruential(myLong Multiplier, myLong Increment, myLong Modulus, myLong Seed) : PseudoGenerator(Seed), Multiplier(Multiplier), Increment(Increment), Modulus(Modulus) {}

// Destructor
LinearCongruential::~LinearCongruential() {}

// Methods
double LinearCongruential::Generate() 
{
	Current = (Multiplier * Current + Increment) % Modulus;
	return (double) Current / Modulus;
}