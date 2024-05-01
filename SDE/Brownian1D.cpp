#include "Brownian1D.h"
#include "Normal.h"

// Constructor
Brownian1D::Brownian1D(RandomGenerator* gen) : RandomProcess(gen, 1) { }

// Destructor
Brownian1D::~Brownian1D(){}

// Methods
void Brownian1D::simulate(double startTime, double endTime, size_t nbSteps)
{
    SinglePath path = SinglePath(startTime, endTime, nbSteps);
    NormalBoxMuller gen = NormalBoxMuller(0, 1);
    size_t step = (endTime - startTime) / nbSteps;

    for (size_t i = startTime; i < endTime; i += step)
    {
        if (i == 0)
            path.insertValue(0);
        else
            path.insertValue(path.getState(i - step) + sqrt(i - (i - step)) * gen.Generate());
    }
}