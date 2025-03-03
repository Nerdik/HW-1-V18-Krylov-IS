// Вариант 18

#include <iostream>
#include <cmath>

int main()
{
    double x;
    std::cout << "Input x: " << std::endl;
    std::cin >> x;

    // По замечаниям к условиям задачи считаем, что вводимое значение принадлежит 
    // области определения, поэтому проверку на деление на 0 не производим
    double result = 2 / std::tan(3 * x) - 1 / (12 * x * x + 7 * x -5);

    std::cout << "Result: " << result << std::endl;

    return 0;
}