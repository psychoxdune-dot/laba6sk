#include <iostream>
#include <cmath>
#include "solver.hpp"
#include "formatter_ex.h"

int main() {
    double a, b, c;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    auto roots = solve(a, b, c);
    if (std::isnan(roots.first)) {
        formatter(std::cout, "No real roots");
    } else {
        formatter(std::cout, "x1 = " + std::to_string(roots.first));
        formatter(std::cout, "x2 = " + std::to_string(roots.second));
    }
    return 0;
}
