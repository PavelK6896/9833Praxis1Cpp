#include <iostream>
#include <string>
using std::cout;
using std::string;

void multiply(int n, int m=3); //прототип
void square(int&, int&); // передача пораметров по сылке


void m1()
{
     cout << "m1 \t\n\n\t";

     cout << "m1 \t\n";
     cout << "m1 \t\n\n";

}


int main()
{
    m1();

         multiply(4, 5);
         multiply(4);
     cout << "m1 \t\n\n";
        int a = 4;
         { //блок как контекст
                int a = 20;
                std::cout << "a=" << a << std::endl;
         }
       static  int b = 5; //сохроняеться в памяти
                 { //блок как контекст
                        int b = 20;
                        std::cout << "b=" << b << std::endl;
                 }

        std::cout << "Before square: a = " << a << "\tb=" << b << std::endl;
        square(a, b);
        std::cout << "After square: a = " << a << "\tb=" << b << std::endl;

//От передачи аргументов по ссылке следует отличать передачу ссылок в качестве аргументов:
//зависит только от того что принемает функция
//определение параметров именно как константных ссылок больше всего подходит для данной задачи.
//Не следует возвращать ссылку на локальный объект
//Объекты, которые создаются внутри блока кода (он может представлять функцию или какую-либо конструкцию типа циклов),
//называются локальными. Такие объекты доступны в пределах только того блока кода, в котором они определены.
//При входе в блок для подобных переменных выделяется память, а после завершения работы этого блока,
//выделенная память освобождается, а объекты удаляются.




    cout << "end 4 cpp!";
    return 0;
}


void multiply(int n, int m)
{
    int result = n * m;
    std::cout << "n * m = " << result << std::endl;

}

void square(int &a, int &b) // принемает сылку может менять объект
{
    a = a * a;
    b = b * b;
    std::cout << "In square: a = " << a << "\tb=" << b << std::endl;
}
