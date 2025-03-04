// Var 18

#include <iostream>
#include <cmath>

// Function for Exercise 1.
double ex1(double x)
{    
    double result = 2 / std::tan(3 * x) - 1 / (12 * x * x + 7 * x -5);

    return result;
}

// Function for Exercise 2.
double ex2(double a)
{
    double radius = a / std::sqrt(3);

    return radius;
}


int main()
{   
    // Exercise 1.
    double x;
    std::cout << "Exercise 1" << std::endl;
    std::cout << "Input x: " << std::endl;
    std::cin >> x;

    std::cout << "Result: " << ex1(x) << std::endl;

    
    // Exercise 2.
    double a;
    std::cout << "Exercise 2" << std::endl;
    std::cout << "Input a: " << std::endl;
    std::cin >> a;

    std::cout << "Radius: " << ex2(a) << std::endl;

    return 0;
}