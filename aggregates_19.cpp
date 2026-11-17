#include <iostream>

struct Data {
    int x;
    int y;
    int z;
};

int main()
{
    Data d1{ 1, 2};
    Data d2{ 1};
    Data d3{};

    std::cout << d1.x << d1.y << d1.z << '\n';
    std::cout << d2.x << d2.y << d2.z << '\n';
    std::cout << d3.x << d3.y << d3.z << '\n';
}
