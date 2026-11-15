struct Base1 {
    int a;
};

struct Base2 {
    int b;
};

struct Derived : Base1, Base2 {
    int x;
    int y;
};

int main()
{
    Derived d1{ {10}, {20}, 30, 40 };
    Derived d2{ {10}, {20}, {30}, {40} };
    Derived d3{ 10, 20, 30, 40 };
}
