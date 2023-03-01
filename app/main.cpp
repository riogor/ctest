#include <iostream>
#include <stdexcept>

#include "quad.hpp"

int main()
{
    std::cout << "Please enter the coefficients (a, b, c) of a quadratic equation (ax^2 + bx + c = 0):\n";

    double a, b, c;
    std::cin >> a >> b >> c;

    if(!std::cin.good())
    {
        std::cerr << "Entered data is not an integer type." << '\n';
        
        return 1;
    }

    try
    {
        auto result = find_roots_of_quad(a, b, c);
        std::cout << "Roots are: " << result.first << " " << result.second;

        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';

        return 1;
    }
}
