#include "solver.hpp"

std::pair<double, double> solve(double a, double b, double c) {
    double d = b*b - 4*a*c;
    if (d < 0) return {NAN, NAN};
    double sqrt_d = sqrt(d);
    return {(-b + sqrt_d)/(2*a), (-b - sqrt_d)/(2*a)};
}
