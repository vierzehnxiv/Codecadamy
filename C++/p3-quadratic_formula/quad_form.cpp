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
    float a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    float root1 = (-b + std::sqrt(std::pow(b, 2) - 4 * a * c)) / (2 * a); 
    float root2 = (-b - std::sqrt(std::pow(b, 2) - 4 * a * c)) / (2 * a);
  
    std::cout << "Root 1 is " << root1 << std::endl;
    std::cout << "Root 2 is " << root2 << std::endl;
}