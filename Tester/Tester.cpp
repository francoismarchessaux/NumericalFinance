#include <iostream>
#include <EcuyerCombined.h>

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