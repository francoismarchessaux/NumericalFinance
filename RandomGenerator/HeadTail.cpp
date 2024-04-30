#include "HeadTail.h"

// Constructor
HeadTail::HeadTail() : Uniform() {}

// Destructor
HeadTail::~HeadTail() {}

// Methods
double HeadTail::Generate()
{
	return (Uniform.Generate() <= 0.5);
}