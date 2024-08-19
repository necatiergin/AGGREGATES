#include <type_traits>
#include <string>

struct Nec {
	~Nec();
	Nec& operator=(const Nec&);
	Nec& operator=(Nec&&);
	std::string x, y;
};

int main()
{
	static_assert(std::is_aggregate_v<Nec>);
}
