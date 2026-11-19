struct HttpConfig {
    int port = 80;
    int timeout = 30;
    int retries = 3;
    bool keep_alive = true;
    bool logging = false;
};

HttpConfig default_cfg{};

HttpConfig test_cfg{
    .port = 8080,
    .logging = true
};

HttpConfig production_cfg{
    .port = 443,
    .timeout = 60,
    .keep_alive = true
};
