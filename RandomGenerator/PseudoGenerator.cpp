#include "PseudoGenerator.h"

// Constructor
PseudoGenerator::PseudoGenerator() {}

PseudoGenerator::PseudoGenerator(myLong inputSeed) : Seed(inputSeed)
{
	Current = inputSeed;
}

// Destructor
PseudoGenerator::~PseudoGenerator() {}