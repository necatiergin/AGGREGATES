#include <type_traits>

struct Nec {
	int x, y;
	virtual void func();
};

int main()
{
	static_assert(std::is_aggregate_v<Nec>, "not an aggregate!");  //fired
}
