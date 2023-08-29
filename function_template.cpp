#include <iostream>
template <typename T, typename U>

auto max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {
    // function template == typescript제너릭같은것
    std::cout << max(1, 2.1) << '\n';
    return 0;
}