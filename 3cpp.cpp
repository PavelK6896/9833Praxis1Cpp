#include <iostream>
#include <string>
using std::cout;
using std::string;

void m1()
{
     cout << "m1 \t\n\n\t";
     int i = 1;
     while(i < 7)
     {
         std::cout << i << " * " << i << " = " << i * i << std::endl;
        i++;
     }
    cout << "Hello \t\n\n\t";
     for(int i =1; i < 10; i++)
     {
         std::cout << i << " * " << i << " = " << i * i << std::endl;
     }

    cout << "Hello \t\n\n\t";
     for ( ; ; )
     {
        std::cout << i << " * " << i << " = " << i * i << std::endl;
        i++;
        if (i > 10) break;
     }

}

void m2()
{
    cout << "m2 \t\n\n\t";
    int number = 5;
    int &refNumber = number;
    cout << &refNumber << "\t" << refNumber << "\n";
}

void m3()
{
    cout <<  "\t\tm3\n";
    int numbers[] = {1, 2, 3, 4, 5, 6};
    cout << numbers << "\n";
    cout << numbers[0] << "\n";

    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    char s2[] = "world";
    cout << s1 << " = " << sizeof(s1) << "\n";
    cout << s2 << " = " << sizeof(s2) << " " << s2[4] << "\n";
    for(int i = 1; i < 10; i++) //
    {
        cout << s2[i] << "\n";
    }

    //нахождение длины
    int numbers2[] = {1,2,3,4, 55, 99, 150};
    int size = sizeof(numbers2)/sizeof(numbers2[0]);
    cout << "numbers2\t" << sizeof(numbers2) << "\n";
    cout << sizeof(numbers2[0]) << "\n";
    cout << size << "\n";

    for(int i=0; i < size; i++)
        cout << "i-" << i << " " << numbers2[i] << "\n";


    char32_t sss[] = {'s', 'd', 's', 'r', 'y'};
    int size2 = sizeof(sss)/sizeof(sss[0]);
    cout << "sss\t" << sizeof(sss) << "\n";
    cout << sizeof(sss[0]) << "\n";
    cout << size2 << "\n";
}

void m4()
{

    const int rows = 3, columns = 2;
    int numbers[rows][columns] = { {1, 2}, {'3', '4'}, {5, 6} };

//спецификатор auto для определения типа
    for(auto &subnumbers : numbers)
    {
        for(int number : subnumbers)
        {
            std::cout << number << "\t";
        }
        std::cout << std::endl;
    }


    std::string hello = "Hello World! прсото";
    std::cout << hello << "\n";


    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + " " + s2; // hello world
    cout << s3 << "\n";

    bool result = (s1 == s2);
    cout << result << "\n";
    cout << s1.size() << "\n";


    std::string hello2 = "Hello";
    char c = hello2[1];
    hello2[0]='M';
    std::cout << hello2 << "\n";


    char letters[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char letters2s[] = {'h', 'e', 'l', 'l', 'q'};
    char letters3s[] = "hello33";
    std::cout << letters << "\n";
    std::cout << "--------------------" << "\n";
    std::cout << letters2s << "\n";
    std::cout << "--------------------" << "\n";
    std::cout << letters3s << "\n";

}


int main()
{
    m1();
    m2();
    m3();
    m4();
    cout << "Hello of 3cpp просто текст";
    return 0;
}
