#include <iostream>
#include <string>

int main()
{
    std::string rawStr1 = R"abc(This is test \string)abc";
    std::string rawStr2 = R"(This is test \string)";

    std::cout << "rawStr1 = " << rawStr1 << std::endl;
    std::cout << "rawStr2 = " << rawStr2 << std::endl;

    return 0;

}
