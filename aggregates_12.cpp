#include <type_traits>
#include <iostream>

struct Nec {
	int x;
	int y = x;
};

int main()
{
	Nec mynec{ 2 };

	std::cout << mynec.x << mynec.y;
}
