struct Nec {
	int x;
private:
	Nec() = delete;
};


int main()
{
	Nec n1;
	Nec n2{}; //valid in C++17 invalid C++20
}
