

#include <iostream>
#include "o.h"
//вызываем по интерфесу o.h

int main()
{

   std::cout << "xx = " << xx << std::endl;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    std::cout << "result3 = " << x * y << std::endl;
    return 0;
}

//передать все компилятору
//g++ 1.cpp o.cpp