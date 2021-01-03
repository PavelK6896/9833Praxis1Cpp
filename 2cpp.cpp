#include <iostream>


void m1()
{
    std::cout << "m1----" << "\n";

    const int x = 22;
    std::cout << x << "\n";

    int a = 8;
    int b = 7;
    int c = a + 5 * ++b; //48
    std::cout << c  << "\n";

}

void m2()
{

    int a = 2 << 2;           // bin 0010  на два разрядов влево(плючс 2 нуля(lsh)) = 1000 - dec 8
    int b = 16 >> 3;          // bin 0001 0000 на три разряда вправо(минус 3 нуля(rsh)) = 0010 - dec 2

    std::cout << a  << "\n";
    std::cout << b  << "\n";

    int r = 5 | 2;          // 101 | 010 = 111 - 7 (хоть один)or
    int t = 6 & 2;          // 110 & 010 = 10  - 2 (только)and
    int y = 5 ^ 3;          // 101 ^ 011 = 110 - 6 Побитовое исключающее ИЛИ (xor) (1+1=0)
    int u = ~9;             // 1001 = 1111 1111 1111 0110 - -10 обратное знасение шестнадцати

    std::cout << r  << "\n";
    std::cout << t  << "\n";
    std::cout << y  << "\n";
    std::cout << u  << "\n";

}


void m3()
{

    int a = 5;
    a += 10;        // 15
    a -= 3;         // 12
    a *= 2;         // 24
    a /= 6;         // 4
    a <<= 4;      // 64
    a >>= 2;      // 16

    std::cout << a  << "\n";
    std::cout << "Weight:\t" << "?????" << "***" << std::endl; //сброс буфера


    int age;
    double weight;
    std::cout << "Input age: ";
    std::cin >> age >> weight;
    std::cout << "Your age: " << age << "\t your weight: " << weight << std::endl;

}


using std::cout; // std:: Этот префикс указывает, что объекты cout, cin, endl определены в пространствен имен std.

void m4()
{
    cout << "Input age: ";
}

int main()
{
    m1();
    m2();
    m3();
    m4();
    std::cout << "Hello of 2cpp просто текст";
    return 0;
}
