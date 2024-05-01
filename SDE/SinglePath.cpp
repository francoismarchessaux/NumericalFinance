#include "SinglePath.h"

// Constructor
SinglePath::SinglePath(double start, double end, size_t nbSteps) : startTime(start), endTime(end), nbSteps(nbSteps)
{
	if (nbSteps == 0)
		throw std::exception("The number of steps should be greater than 0.");
}

// Destructor
SinglePath::~SinglePath(){}

// Methods
void SinglePath::insertValue(double val)
{
	values.push_back(val);
}

double SinglePath::getState(double time) 
{ 
	return values[time]; 
}

std::vector<double> SinglePath::getAllValues() 
{ 
	return values;
}
