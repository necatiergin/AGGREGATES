struct Data {
    int values[3];
};

Data d{
    .values = {10, 20, 30}
}; // OK

int a[5]{
    [2] = 10
}; // Error

