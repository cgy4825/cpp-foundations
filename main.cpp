#include <iostream>
#include "calc.h"
#include "geometrry.h"


int main(){
    std::cout << "Hello World!\n";
    // int x;
    // int y;
    // int x{ };
    // int y{ };
    // std::cout << "Enter two numbers seperated by space:" << std::endl;
    // std::cin >> x>> y;
    // std::cout << "The sum of " << x << " and " << y << " is: " << x + y << std::endl;

    // std::cout << "Please enter an Integer:";
    // int num;
    // std::cin >> num;
    // std::cout << "the double of your enter is " << num * 2 << std::endl;

    std::cout << "x + y 的值为： "<< add(3,4) <<std::endl;

    return 0;
}