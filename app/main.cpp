#include <iostream>
#include <cmath>

#include "quad.hpp"

int main()
{
    std::cout << "Please enter the coefficients (a, b, c) of a quadratic equation (ax^2 + bx + c = 0):\n";

    double a, b, c;
    std::cin >> a >> b >> c;

    auto result = find_roots_of_quad(a, b, c);

    if(std::isnan(result.first))
        std::cout << "This is not a quadratic equation.";
    else if(std::isinf(result.first))
        std::cout << "This quadratic equation doesn't have roots in real numbers.";
    else
        std::cout << "Roots are: " << result.first << " " << result.second;

    return 0;
}
