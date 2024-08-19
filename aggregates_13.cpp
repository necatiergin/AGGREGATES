template <typename T>
struct Nec {
	T x;
	int val;
};

int main()
{
	Nec x = { 13, 6 }; //error no CTAD in C++17
}
