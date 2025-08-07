#include <cstdint>
#include <iostream>
#include <string>


class Rectangle {
public:
	Rectangle() {
		std::cout << __func__ << " constructor: default\n";
	}
	Rectangle(std::string name, uint32_t l, uint32_t b) :name(name), l(l), b(b) {
		std::cout << __func__ << " constructor: name, l, b\n";
	}

	~Rectangle() {
		std::cout << __func__ << " destructor\n";
	}

	uint64_t area() {
		return l * b;
	}

	void displayArea();

private:
	std::string name{"Rectangle"};
	uint32_t l{0};
	uint32_t b{0};

};

void
Rectangle::displayArea() {
	std::cout << "Area of " << name << " = " << area() << std::endl; 
}

void
classDemo() {
	Rectangle r1;
	Rectangle r2("r2", 2,3);
	Rectangle *r3;
	Rectangle *r4;
	r3 = new Rectangle;
	r4 = new Rectangle("r4", 4, 5);
	
	r1.displayArea();
	r2.displayArea();
	r3->displayArea();
	r4->displayArea();

	delete r3;
	delete r4;
}

int main() {
	classDemo();
	return 0;
}
