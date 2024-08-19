#include <type_traits>

class Nec {
public:
	int x, y;
	void foo();
protected:
	void bar();
private:
	void baz() const;
};

int main()
{
	static_assert(std::is_aggregate_v<Nec>); //holds
}
