#include <iostream>

int main(){
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

    // 1. 整数溢出
    int big = 2147483647;
    std::cout << big + 1 << std::endl;        // 观察输出

    // 2. 浮点精度
    double a = 0.1, b = 0.2;
    std::cout << (a + b == 0.3) << std::endl; // 观察 0 还是 1

    // 3. 未初始化变量
    int x;
    std::cout << x << std::endl;              // 观察是不是垃圾值
}