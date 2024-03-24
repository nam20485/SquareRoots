#pragma once

#include "sqrt_export.h"

SQRT_API constexpr double get_precision();

SQRT_API bool real_equals(double d1, double d2, double precision);

SQRT_API double bssqrt(double d);

double truncate(double d);

