#include <iostream>
#include <string>

template <typename T> T Average(T a, T b) { return (a + b) / 2; }

std::string Average(std::string a, std::string b) {
    std::string result = a + " " + b;
    return result.substr(0, result.size() / 2);
}

int main() {
    std::cout << Average(2.5, 3.3) << std::endl;
    std::cout << Average(2, 3) << std::endl;
    std::cout << Average(std::string("C++"), std::string("Programming"))
              << std::endl;
}