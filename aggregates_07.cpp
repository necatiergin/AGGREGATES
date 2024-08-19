#include <type_traits>

auto f = [] {};

struct Nec : decltype(f) {
	int x;
};

int main()
{
	static_assert(std::is_aggregate_v<Nec>);
}
