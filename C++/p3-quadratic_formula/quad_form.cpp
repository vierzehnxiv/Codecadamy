// Quadratic Formula Solver
// This program calculates the roots of a quadratic equation ax^2 + bx + c = 0
// using the quadratic formula: x = (-b ± √(b² - 4ac)) / (2a)
////////////////////////////////////////////////////////////////////////////////
// made by |vierzehn|
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>

int main() 
{
    double a, b, c;
    std::cout << "Enter a: ";
    if (!(std::cin >> a)) {
        std::cout << "Invalid input for a." << std::endl;
        return 1;
    }

    std::cout << "Enter b: ";
    if (!(std::cin >> b)) {
        std::cout << "Invalid input for b." << std::endl;
        return 1;
    }

    std::cout << "Enter c: ";
    if (!(std::cin >> c)) {
        std::cout << "Invalid input for c." << std::endl;
        return 1;
    }

    if (a == 0 && b == 0) 
    {
        std::cout << "This is not a valid equation." << std::endl;
        return 1;
    }

    if (a == 0) 
    {
        double root = -c / b;
        std::cout << "This is a linear equation. The root is " << root << std::endl;
        return 0;
    }

    double discriminant = std::pow(b, 2) - 4 * a * c;
    if (discriminant < 0) {
        std::cout << "No real roots exist." << std::endl;
        return 0;
    }
    if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "There is one real root: " << root << std::endl;
        return 0;
    }


    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
  
    std::cout << "Root 1 is " << root1 << std::endl;
    std::cout << "Root 2 is " << root2 << std::endl;
    return 0;
}