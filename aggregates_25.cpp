struct A {
    int x;
    int y;
};

struct B {
    B(int, int) {}
};

int main()
{
    A a{ 10, 20 }; // direct-list init. - aggregate initialization
    B b{ 10, 20 }; // direct-list init. - constructor called
}
