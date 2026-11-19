struct Window {
    int x;
    int y;
    int width;
    int height;
    bool visible;
    bool resizable;
};

Window w1{ 100, 200, 800, 600, true, false };

Window w2{
    .x = 100,
    .y = 200,
    .width = 800,
    .height = 600,
    .visible = true,
    .resizable = false
};
