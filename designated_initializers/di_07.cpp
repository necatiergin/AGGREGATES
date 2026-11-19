#include <vector>
#include <iostream>
#include <iomanip>

struct Point {
	double x, y, z;
};

int main()
{
	Point a{};
	a.x = 3.4;

	Point p = { .x = 3, .y = 5, .z = 5 };
	std::vector<Point> pvec;

	pvec.push_back(Point{ .x = 1.1, .y = 2.2, .z = 3.3 });
	pvec.push_back(Point{ .x = {1.1}, .y = {2.2}, .z = {3.3} });
	pvec.push_back(a);
	pvec.push_back(p);

	std::cout << std::fixed << std::setprecision(1);

	for (const auto& [x, y, z] : pvec)
		std::cout << x << ' ' << y << ' ' << z << '\n';
}
