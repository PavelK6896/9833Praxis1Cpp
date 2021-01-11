#include <iostream>

//реализация

int factorial1(int n)
{
    if (n > 1)
        return n * factorial1(n - 1);
    return 1;
}


void factorial2(int n)
{
    if(n<1)
    {
        std::cout << "Incorrect number" << std::endl;
        return;
    }
    int result = 1;
    for(int i = 1; i <=n; i++)
    {
        result *= i;
    }
    std::cout << "Factorial of " << n << " is equal to " << result << std::endl;
}


int factorial3(int n)
{
    int result = 1;
    for(int i = 1; i <=n; i++)
    {
        result *= i;
    }
    return result;
}