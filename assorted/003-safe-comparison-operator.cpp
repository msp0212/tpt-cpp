#include <iostream>
#include <utility>

int main()
{
	// c++20
	// functions to safely compare integers of different signs
	// cmp_equal(T1 a, T2 b)
	// cmp_not_equal(T1 a, T2 b)
	// cmp_less(T1 a, T2 b)
	// cmp_less_equal(T1 a, T2 b)
	// cmp_greater(T1 a, T2 b)
	// cmp_greater_equal(T1 a, T2 b)

	unsigned int a = 4;
	int b = -3;

	bool result1 = std::cmp_greater(a, b);
	bool result2 = (a > b);

	std::cout << std::boolalpha << "cmp_greater(4, -3) " << result1 << "\n"
		<< "(4 > -3) " << result2 << "\n";

	return 0;
}
