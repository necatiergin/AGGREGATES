#include <iostream>

struct Point {
	int x, y;
};

struct Point3D {
	double dx, dy, dz;
};

void process(const Point&)
{
	std::cout << "process(Point&)\n";
}

void process(const Point3D&)
{
	std::cout << "process(Point3D&)\n";
}


int main()
{
	process({ .x = 5, .y = 4 });
	process({ .dx = 5, .dy = 4 });
}
