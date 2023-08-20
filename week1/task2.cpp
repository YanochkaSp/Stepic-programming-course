// Возведение целого числа в неотрицательную целую степень
#include <iostream>
using namespace std;

int power(int x, unsigned p) 
{
    int answer = 1;
    /* считаем answer */
    if (p != 0)
    {
        for (int i = 1; i <= p; i++)
        {
            answer *= x;  
        }
        return answer;
    }
    else
        return 1;
}

int main()
{
    int a = power(3, 2);
    cout << "power = " << a;
    return 0;
}


