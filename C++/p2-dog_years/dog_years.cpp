#include <iostream>

int main()
{
    // var for age of dog
    int dog_age;
    std::cout << "Enter your dog's age: ";
    std::cin >> dog_age;

    if (dog_age < 0 || dog_age > 30)
    {
        std::cout << "Invalid age. Please enter a valid age between 0 and 30." << std::endl;
        return 1;
    }
    if (dog_age <= 2)
    {
        std::cout << "Ruff ruff, I am " << dog_age * 10.5 << " years old in human years." << std::endl;
        return 0;
    }
    // The first two years of a dog’s life count as 21 human years.
    int early_years = 21;
    // Each following year counts as 4 human years.
    int later_years = (dog_age - 2) * 4;
    int human_years = early_years + later_years;

    // Output the dog's name and age in human years
    std::cout << "Ruff ruff, I am " << human_years << " years old in human years." << std::endl;
    return 0;
}