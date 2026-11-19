struct Result {
    int status;

    union {
        int value;
        double error;
    };
};

Result r{
    .status = 1,
    .error = 3.5
};
