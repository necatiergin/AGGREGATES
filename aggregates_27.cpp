#include <iostream>

struct Data {
    int x;
    int y;
    int z;
};

int main()
{
    int n = 0;

    Data d{ ++n, ++n, ++n };

    std::cout << d.x << d.y << d.z << '\n';
}
