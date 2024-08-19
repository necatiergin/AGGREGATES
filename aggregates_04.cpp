#include <type_traits>

struct Base
{
	Base(int x) : mx{ x } {}
	int mx;
};

struct Member
{
	Member(int x) : mx{ x } {}
	int mx;
};

struct X : Base {
	int ival;
};

struct Y {
	int ival;
	Member mx;
};

struct Z : Base {
	int ival;
	Member mx;
};

int main()
{
	//static_assert(std::is_aggregate_v<Base>, "not an aggregate type");
	//static_assert(std::is_aggregate_v<Member>, "not an aggregate type");
	static_assert(std::is_aggregate_v<X>, "not an aggregate type");
	static_assert(std::is_aggregate_v<Y>, "not an aggregate type");
	static_assert(std::is_aggregate_v<Z>, "not an aggregate type");
}
