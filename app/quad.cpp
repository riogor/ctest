#include <cmath>

#include "quad.hpp"

double find_discriminant_of_quad(const double a, const double b, const double c)
{
    return b*b - 4.0*a*c;
}

std::pair<double, double> find_roots_of_quad(const double a, const double b, const double c)
{
    if(a == 0)
        return {NAN, NAN};

    double discriminant = find_discriminant_of_quad(a, b, c);
    if(discriminant < 0)
        return {INFINITY, INFINITY};

    discriminant = sqrt(discriminant);
    return {(-b + discriminant)/(2.0*a), (-b - discriminant)/(2.0*a)};
}