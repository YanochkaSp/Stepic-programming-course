// Программа, которая посимвольно читает из std::cin, пока не достигнет конца потока ввода, 
// и заменяет несколько подряд идущих пробелов одним и выводит полученный результат в std::cout.  
#include <iostream>

int main()
{
    char c;
    bool is_ok = true;
    while (!std::cin.eof())
        while (std::cin.get(c))
        {
            if (c != ' ')
            {
                std::cout << c;
                is_ok = true;
            }
            else if (is_ok)
            {
                std::cout << c;
                is_ok = false;
            }
        }
}