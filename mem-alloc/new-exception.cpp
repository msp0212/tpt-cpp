#include <iostream>
#include <new>

const long GB = 1024 * 1024 * 1024L;
const long TB = 1024L * GB;

void newException() {
	int *arr;
	try {
		arr = new int [TB];
	} catch (std::bad_alloc& e) {
		std::cerr << "mem alloc failed: " << e.what() << std::endl;
		return;
	}
	delete [] arr;

}

void newNoException() {
	int *arr;
	arr = new (std::nothrow) int [TB];
	if (arr == nullptr) {
		std::cerr << "mem alloc failed" << std::endl; 
		return;
	}
	delete [] arr;
}


int main() {
	newException();
	newNoException();
	return 0;
}
