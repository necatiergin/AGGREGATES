#include <iostream>

struct Point {
	double x;
	double y = 4.1;
	double z;
};

int main()
{
	Point p1 = { .z = 5.5 };
	std::cout << "x = " << p1.x << " y = " << p1.y << " z = " << p1.z << '\n';
	// 0 4.1 5.5

	Point p2 = { .y = 3.3, .z = 5.5 };
	std::cout << "x = " << p2.x << " y = " << p2.y << " z = " << p2.z << '\n';
	// 0 3.3 5.5,
}
