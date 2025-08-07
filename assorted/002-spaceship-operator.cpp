#include <iostream>

int main()
{
	// <=> is a 3-way comparison operator and work similar to strcmp

	bool result = ((3 <=> 3) == 0); // true
	std::cout << "((3 <=> 5) == 0)" << std::boolalpha << result << "\n";

	result = ((3 <=> 5) == 0); //false
	std::cout << "((3 <=> 5) == 0) "<< result << "\n";

	result = ((3 <=> 5) != 0); //true
	std::cout << "((3 <=> 5) != 0) "<< result << "\n";

	result = ((1 <=> 3) > 0); //false
	std::cout << "((1 <=> 3) > 0) "<< result << "\n";

	result = ((1 <=> 3) < 0); //true
	std::cout << "((1 <=> 3) > 0) "<< result << "\n";

	result = ((3 <=> 5) > 0); //false
	std::cout << "((3 <=> 1) > 0) "<< result << "\n";

	result = ((3 <=> 5) < 0); //true
	std::cout << "((3 <=> 1) > 0) "<< result << "\n";
}
