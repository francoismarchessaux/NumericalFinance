#pragma once
#include <iostream>

typedef unsigned long long myLong;

class RandomGenerator
{
	protected:
		myLong Current;

	public:
		// Constructor
		RandomGenerator();

		// Destructor
		~RandomGenerator();

		// Accessors
		myLong GetCurrent();

		// Methods
		virtual double Generate() = 0;
		double Mean(myLong nbSim);
		double Deviation(myLong nbSim);

};