struct A
{
	int x, y;
};

struct B {
	A a;
};

int main()
{
	struct A a = { .y = 1, .x = 3 };   // invalid, not the same order
	int ar[] = { [2] = 6 };            // invalid, not for arrays
	struct B b = { .a.x = 10 };        // invalid
	struct A a2 = { .x = 5, 34 };      // invalid, not mixed init
	struct A a3 = { .x = 5, .x = 42 }; // invalid, not multiple init.
}
