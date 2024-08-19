#include <type_traits>
#include <string>

class A {
public:
	A() = default;
private:
	int x, y, z;
	std::string str;
};

struct B : A {
	int x;
};

struct C : virtual A {
	int x;
};


int main()
{
	//static_assert(std::is_aggregate_v<A>, "not an aggregate type"); //fails
	static_assert(std::is_aggregate_v<B>, "not an aggregate type");
	//static_assert(std::is_aggregate_v<C>, "not an aggregate type"); //fails
}
