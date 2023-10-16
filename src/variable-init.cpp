#include <iostream>

int main()
{
    int a = 0; //c-like
    int b(1); //constructor init
    int c{2}; //uniform init

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

}
