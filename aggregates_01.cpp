#include <type_traits>
#include <string>

class A {
public:
	int x, y, z;
	std::string str;
};

class B {
	int x;	 //B has a private member
};

class C {
protected:
	int x;	 //C has a protected member
};

int main()
{
	static_assert(std::is_aggregate_v<A>, "not an aggregate type");
	//static_assert(std::is_aggregate_v<B>, "not an aggregate type");
	//static_assert(std::is_aggregate_v<C>, "not an aggregate type");
}
