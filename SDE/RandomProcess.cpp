#include "RandomProcess.h"

// Constructor
RandomProcess::RandomProcess(RandomGenerator* gen, int dim) : generator(gen), dimension(dim) {}

// Destructor
RandomProcess::~RandomProcess(){}

// Methods
SinglePath* RandomProcess::getPath(int dimension = 0) 
{ 
	return paths[dimension];
}