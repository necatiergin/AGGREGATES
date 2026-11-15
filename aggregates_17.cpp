struct A {
    int x;
    int y;
};

struct B {
    B(int, int) {}
};

int main()
{
    A a{ 10, 20 }; // Aggregate initialization
    B b{ 10, 20 }; // constructor called
}
