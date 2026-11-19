#include <iostream>
#include <vector>

struct Nec {
	int x;
	int y{ 3 };
	int z;
};

int main()
{
	std::vector<Nec> nvec;

	nvec.emplace_back(Nec{ .x = 5, .z = 6 });
	nvec.emplace_back(Nec{ .x = 1, .y = 2, .z = 3 });
	nvec.emplace_back(Nec{ .x{2}, .z{4} });

	for (const auto [x, y, z] : nvec) {
		std::cout << x << y << z << '\n';
	}
}
