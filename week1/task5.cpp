//Решения квадратных уравнений
#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    double x1, x2, d;
    d = (b * b) - (4 * a * c);
    if (d >= 0) 
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << x1 << " " << x2;
    } 
    else 
    {
        std::cout << "No real roots";
    }
    return 0;
}