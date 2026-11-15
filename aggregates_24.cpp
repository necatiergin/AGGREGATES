struct Data {
    int x;
    double y;
};

int main()
{
    Data d1{ 10, 3.5 };    // OK
    Data d2{ 3.14, 2.5 };  // Error: double -> int
}
