#include <type_traits>

struct Base {
	Base();
	Base(int);
};

struct Der : Base {
	using Base::Base;
};

int main()
{
	static_assert(std::is_aggregate_v<Der>);	//fails
}
