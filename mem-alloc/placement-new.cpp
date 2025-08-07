#include <iostream>
#include <cstdint>

class Foo {
public:
	Foo(int f): f(f) {
		std::cout << __func__ << " constructor" << std::endl;
	}

	~Foo() {
		std::cout << __func__ << " destructor" << std::endl;
	}

	void
	display() {
		std::cout << __func__ << " f = " << f << std::endl;
	}

private:
	int f;
};

void placementNewDemo() {
	alignas(Foo) uint8_t buf[sizeof(Foo)];

	std::cout << "sizeof(Foo) = " << sizeof(Foo) << std::endl;
	Foo *f1;
	f1 = new (buf) Foo(101);
	f1->display();
	f1->~Foo();
}

int main() {
	placementNewDemo();
	return 0;
}

