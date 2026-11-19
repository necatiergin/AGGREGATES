#include <iostream>

class Member {
public:
	Member(int x)
	{
		std::cout << "Member(int x) x = " << x << '\n';
	}
};

struct Nec {
	Member mx;
	int mval;
};

int main(void)
{
	Nec mynec{ 10, 30 };
}
