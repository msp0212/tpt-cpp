#include <iostream>

class Point {

public:
	Point() {}
	Point(int x, int y): x(x), y(y) {}

	Point operator+(const Point &p) const {
		return Point{x + p.x, y + p.y};
	}
	
	bool operator==(const Point &p) const {
		return x == p.x && y == p.y;
	}
	
	void display() {
		std::cout << "(" << x << "," << y << ")\n";
	}
	
private:
	int x{0};
	int y{0};
};

void operatorOverloadDemo() {
	Point p1;
	Point p2{1,2};
	Point p3;
	p1.display();
	p2.display();
	p3.display();
	std::cout << "p1 == p3: " << (p1 == p3) << "\n"; 
	p3 = p1 + p2;
	p3.display();
	std::cout << "p1 == p3: " << (p1 == p3) << "\n";
}

int main() {
	operatorOverloadDemo();
	return 0;
}
