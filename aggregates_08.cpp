#include <type_traits>

struct Nec {
	Nec() = default;
	int x;
};

int main()
{
	static_assert(std::is_aggregate_v<Nec>);  //assertion fails in C++20
}
