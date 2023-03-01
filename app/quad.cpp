#include <cmath>
#include <stdexcept>

#include "quad.hpp"

std::pair<double, double> find_roots_of_quad(const double a, const double b, const double c)
{
    if(a == 0)
        throw std::invalid_argument("This is not a quadratic equation.");

    double discriminant = b*b - 4.0*a*c;
    if(discriminant < 0)
        throw std::logic_error("This quadratic equation doesn't have roots in real numbers.");

    discriminant = sqrt(discriminant);
    return {(-b + discriminant)/(2.0*a), (-b - discriminant)/(2.0*a)};
}