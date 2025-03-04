// Var 18

#include <iostream>
#include <cmath>
#include <iomanip>

// Function for Exercise 1.
void ex1()
{    
    double x;
    std::cout << "Exercise 1" << std::endl;
    std::cout << "Input x: " << std::endl;
    std::cin >> x;
    
    double result = 2 / std::tan(3 * x) - 1 / (12 * x * x + 7 * x -5);

    std::cout << "Result: " << std::fixed << std::setprecision(2) << result << std::endl;
}

// Function for Exercise 2.
void ex2()
{
    double a;
    std::cout << "Exercise 2" << std::endl;
    std::cout << "Input a: " << std::endl;
    std::cin >> a;
    
    double radius = a / std::sqrt(3);

    std::cout << "Radius: " << std::fixed << std::setprecision(2) << radius << std::endl;
}

// Function for Exercise 3.
void ex3()
{
    double a, b, c;
    std::cout << "Input sides of a triangle: " << std::endl;
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            std::cout << "Rectangular" << std::endl;
        }
        else
        {
            std::cout << "Not rectangular" << std::endl;
        }
    }
    else
    {
        std::cout << "The triangle does not exist" << std::endl;
    }
}

int main()
{   
    // Exercise 1.
    ex1();

    // Exercise 2.
    ex2();

    // Exercise 3.
    ex3();   

    return 0;
}