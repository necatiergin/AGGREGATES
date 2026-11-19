struct Data {
    int x;
    double y;
};

Data d1{ .x = 3.14 }; // Error
Data d2{ .x{3.14} };  // Error
Data d3{ .x = 42 };   // OK
