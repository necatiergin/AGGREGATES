#include <string>

struct Person {
    std::string name;
    int age;
};

int main()
{
    Person p{ "Ali", 35 }; //aggregate init.
    // std::string ctor. called for name
}
