#include "sqrt.h"

constexpr double PRECISION = 1.0E-9; //0.000000001;

constexpr double get_precision()
{
	return PRECISION;
}

double truncate(double d)
{
	return static_cast<int>(d / get_precision()) * get_precision();
}