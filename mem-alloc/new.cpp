#include <iostream>

void simpleAlloc() {
	int *a = new int;
	*a = 2;
	std::cout << "a = " << *a << std::endl;
	delete a;
}

void arrayAlloc() {
	const int ARR_SZ = 8;
	int *arr = new int [ARR_SZ];
	for (int i = 0; i < ARR_SZ; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < ARR_SZ; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	delete [] arr;
}

int main() {
	simpleAlloc();
	arrayAlloc();
	return 0;
}
