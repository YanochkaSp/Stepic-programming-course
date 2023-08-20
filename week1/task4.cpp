#include <iostream>

int main()
{
    int T = 0;
    int a = 0;
    int b = 0;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
}