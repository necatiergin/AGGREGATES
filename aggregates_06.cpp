#include <string>
#include <type_traits>

struct Nec {
	int x, y;
	inline static int ival{ 45 };
	static std::string ms;
};

int main()
{
	static_assert(std::is_aggregate_v<Nec>, "not an aggregate!"); //holds
}
