//распределить функции по файлам

#include <iostream>
//подключаем объявление (интерфейс)
#include "f.h"

int main()
{
    int result = factorial1(5);
    std::cout << "result = " << result << std::endl;

    factorial2(9);
    factorial2(5);

    std::cout << "result3 = " << factorial3(5) << std::endl;
    return 0;
}
//передать все компилятору
//g++ 1.cpp f.cpp