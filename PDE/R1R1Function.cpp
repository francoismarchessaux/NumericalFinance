#include "R1R1Function.h"
#include <cmath>
#include <algorithm>

// Constructor
R1R1Function::R1R1Function() {}

// Destructor
R1R1Function::~R1R1Function(){}

/***** VANILLA OPTIONS *****/
VanillaTerminalCondition::VanillaTerminalCondition(double strike) : R1R1Function(), Strike(strike) {}

// Terminal Conditions
CallTerminalCondition::CallTerminalCondition(double strike) : VanillaTerminalCondition(strike) {}
PutTerminalCondition::PutTerminalCondition(double strike) : VanillaTerminalCondition(strike) {}

double CallTerminalCondition::operator()(double x)
{
	return std::max(x - Strike, 0.);
}

double PutTerminalCondition::operator()(double x)
{
	return std::max(Strike - x, 0.);
}

// Top and Bottom conditions

CallTopBoundary::CallTopBoundary(double sMax, double strike) : R1R1Function(), SMax(sMax), Strike(strike) {}
CallBottomBoundary::CallBottomBoundary(double sMin, double strike) : R1R1Function(), SMin(sMin), Strike(strike) {}
PutTopBoundary::PutTopBoundary(double sMax, double strike) : R1R1Function(), SMax(sMax), Strike(strike) {}
PutBottomBoundary::PutBottomBoundary(double sMin, double strike) : R1R1Function(), SMin(sMin), Strike(strike) {}

double CallTopBoundary::operator()(double t)
{
	return std::max(SMax - Strike, 0.);
}

double CallBottomBoundary::operator()(double t)
{
	return std::max(SMin - Strike, 0.);
}

double PutTopBoundary::operator()(double t)
{
	return std::max(Strike - SMax, 0.);
}

double PutBottomBoundary::operator()(double t)
{
	return std::max(Strike - SMin, 0.);
}