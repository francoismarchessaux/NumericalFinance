#include <iostream>
#include <LinearCongruential.h>
#include <EcuyerCombined.h>
#include <Bernoulli.h>

void TestRandom()
{
    UniformGenerator* Unif = new EcuyerCombined();
    Unif->Generate();
    std::cout << Unif->GetCurrent() << std::endl;
}

int main()
{
    TestRandom();
}