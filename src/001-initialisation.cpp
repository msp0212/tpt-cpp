#include <iostream>
int main()
{
        int a = 0; // c style
        int b(1); // constructor style
        int c{2}; // uniform
        int d = {3}; // pod like

        std::cout << a << b << c << d << std::endl;
}

