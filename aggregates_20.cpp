#include <string>
#include <iostream>

struct Data {
    int x;
    std::string name;
};

int main()
{
    Data d{ 42 };

    std::cout << d.name.length() << '\n';
}
