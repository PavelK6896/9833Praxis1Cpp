#include <iostream>        //деректива при процесора      
 
int x; //о всегда 0
void m1()
{
	int age;
	int y; //зависит от компилятора
    age = 28;
    std::cout<<"Age = " << age << "\n";
    std::cout <<"X = " << x << "\n";
    std::cout <<"Y = " << y << "\n";
}


void m2()
{
    //размер памяти в байтах
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;  
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;    
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
}

void m3()
{
    char a = 'H';
    wchar_t b = 'e';
    char16_t c = 'l';
    char32_t d = 'o';
    std::cout << "без каста " << a << b << c << d << "\n";
    std::cout << a << (char)b << (char)c << (char)d << "\n";
    std::cout << "статик " << a << static_cast<char>(b) << static_cast<char>(c) << static_cast<char>(d) << "\n";

}

void m4()
{
    short a1 = -10;
    short a2 = 10;
    unsigned short b1 = -10;
    unsigned short b2 = 10;
    std::cout<<"short- = " << a1 << "\n";
    std::cout<<"short = " << a2 << "\n";
    std::cout<<"unsigned short- = " << b1 << "\n";
    std::cout<<"unsigned short = " << b2 << "\n";

    //неявный каст
    int code = 'g';
    char letter = 103;

    std::cout << letter << " in ASCII is " << code << "\n";

    bool a3 = 1;     // true
    bool b3 = 0;     // false
    bool c3 = 'g'; // true
    bool d3 = 3.4;   // true

    int c4 = true;       // 1
    double d4 = false;   // 0
    std::cout << c4 << " == " << d4 << "\n";

    int a5 = 3.4;        // 3
    int b5 = 3.6;        // 3
    std::cout << a5 << " == " << b5 << "\n";

    float a6 = 35005;                // 35005
    double b6 = 3500500000033;       // 3.5005e+012

    std::cout << a6 << " == " << b6 << "\n";

}

int main()                         
{                    
    setlocale(LC_ALL, "");
    m1();
	m2();
	m3();
	m4();
	// с помощью потока std::cout
    std::cout << "Hello of 1cpp просто текст";  
    return 0;                       
} 
