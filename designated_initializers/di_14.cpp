struct Settings {
    int width = 800;
    int height = 600;
    bool fullscreen = false;
};

constexpr Settings s1{
    .width = 1920,
    .height = 1080
};

constinit Settings s2{
    .fullscreen = true
};
