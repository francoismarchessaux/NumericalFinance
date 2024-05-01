#pragma once
#include "RandomGenerator.h"
#include "SinglePath.h"
#include <vector>

class RandomProcess
{
	protected:
		RandomGenerator* generator;
		std::vector<SinglePath*> paths;
		int dimension;

	public:
		// Constructor
		RandomProcess(RandomGenerator* gen, int dim);

		// Destructor
		~RandomProcess();

		// Methods
		virtual void simulate(double startTime, double endTime, size_t nbSteps) = 0;
		SinglePath* getPath(int dimension = 0);
};