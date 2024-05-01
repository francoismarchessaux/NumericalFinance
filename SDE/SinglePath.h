#pragma once
#include <vector>

class SinglePath
{
	protected:
		std::vector<double> values;
		double startTime;
		double endTime;
		size_t nbSteps;

	public:
		// Constructor
		SinglePath(double start, double end, size_t nbSteps);
		
		// Destructor
		~SinglePath();

		// Methods
		void insertValue(double val);
		double getState(double time);
		std::vector<double> getAllValues();
};