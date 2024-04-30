#pragma once
#include "DiscreteGenerator.h"
#include "EcuyerCombined.h"

class HeadTail : public DiscreteGenerator
{
	protected:
		EcuyerCombined Uniform;

	public:
		// Constructor
		HeadTail();

		// Destructor
		~HeadTail();

		// Methods
		double Generate();
};