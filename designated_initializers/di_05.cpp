#include <iostream>

struct Nec {
	int x;
	int y{ 3 };
	int z;
};

Nec get_nec()
{
	//return Nec{ .x = 1, .z = 5 };
	return { .x = 1, .z = 5 };
}

int main()
{
	auto nec = get_nec();

	std::cout << nec.x << nec.y << nec.z << '\n';
}
