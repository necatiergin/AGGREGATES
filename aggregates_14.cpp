template <typename T>
struct Nec {
	T x;
	int val;
};

//deduction guide
template <typename T>
Nec(T, int) -> Nec<T>;

int main()
{
	Nec x = { 13, 6 };
}
