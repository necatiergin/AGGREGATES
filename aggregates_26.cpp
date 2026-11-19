#include <iostream>

int foo(int x)
{
    std::cout << x << '\n';
    return x;
}

struct Data {
    int x;
    int y;
    int z;
};

int main()
{
    Data d{ foo(1), foo(2), foo(3) };
}
