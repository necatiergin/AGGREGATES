struct Point {
    int x;
    int y;
};

int main()
{
    Point p1{10, 20};  // aggregate init. / direct list init
    Point p2 = {10, 20}; // aggregate init. / copy  list init
}
