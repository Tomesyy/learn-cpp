#include <iostream>
#include <array>
#include <span>

struct Foo {
    int a{ };
    int b{ };
    int c{ };
};

consteval int sum(std::span<const int> a){
    int s{ 0 };
    for (auto n : a)
        s += n;
    return s;
}

auto sum(auto x, auto y) -> decltype(x+y){
    return x + y;
}

int main() {
    // std::cout << "Hello World";
    constexpr std::array a {3,2,1};
    constexpr int s{ sum(a) };
    std::cout << s << '\n';

    Foo f1{ .a = 1, .c = 3};
    std::cout << sum(f1.a, f1.c) << '\n';

    return 0;
}
