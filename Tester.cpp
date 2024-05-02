#include <iostream>
#include "RandomGenerator.h"
#include "EcuyerCombined.h"
#include "LinearCongruential.h"
#include "Poisson.h"
#include "FiniteSet.h"
#include "Exponential.h"
#include "Normal.h"
#include "PDEGrid2D.h"
#include "Brownian1D.h"
#include "SinglePath.h"


void TestPDE()
{
    double Spot = 80;
    double Strike = 60;
    double Maturity = 1;
    double Rate = 0.05;
    double Volatility = 0.1;

    double SMin = 0;
    double SMax = 1000;

    R2R1Function* VarianceFunction = new BSVariance(Volatility);
    R2R1Function* TrendFunction = new BSTrend(Rate);
    R2R1Function* ActualizationFunction = new BSActualization(Rate);
    R2R1Function* SourceTermFunction = new NullFunction();

    R1R1Function* TopBoundaryFunction = new CallTopBoundary(SMax, Strike);
    R1R1Function* BottomBoundaryFunction = new CallBottomBoundary(SMin, Strike);
    R1R1Function* RightBoundaryFunction = new CallTerminalCondition(Strike);

    PDEGrid2DExplicit BlackScholesGrid(Maturity, SMin, SMax, 10000, 1.,
        VarianceFunction, TrendFunction, ActualizationFunction, SourceTermFunction,
        TopBoundaryFunction, BottomBoundaryFunction, RightBoundaryFunction);

    BlackScholesGrid.FillNodes();
    double priceAtZero = BlackScholesGrid.GetTimeZeroNodeValue(Spot);

    std::cout << "Price = " << priceAtZero << std::endl;
}



int main()
{
    TestPDE();
}