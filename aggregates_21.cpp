// aggregate types may have default member initializers
struct Config {
    int width = 800;
    int height = 600;
    bool fullscreen = false;
};

int main()
{
    Config c1{};
    Config c2{1024};
    Config c3{1024, 768};
    Config c4{1024, 768, true};
}
