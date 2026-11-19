#include <string>

struct Nec {
	int x;
	int y{ 10 }; //since C++11
	//still aggregates C++14
	int z;
};

struct Erg {
	std::string name;
	Nec nec;
};

int main()
{
	Nec n1{ 1, 2, 3 };
	Nec n2{ .x = 5, .y = 23, .z = 67 };
	Nec n3{ .x{5}, .y{23}, .z{67} };
	Nec n4{ .x{3}, .z{9} };
	Erg e1{ .name{"necati"}, .nec{1,3, 5} };
	Erg e2{ .name{"necati"}, .nec{.x = 1, .z = 5} };
}
