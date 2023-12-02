#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template <class container> void Print(container c) {
    for (auto iter = c.begin(); iter != c.end(); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> v1{10, 20, 30, 40, 50};
    Print(v1);

    v1.erase(v1.begin() + 3);
    Print(v1);

    v1.erase(v1.begin() + 2, v1.end());
    Print(v1);
    std::cout << std::endl;

    std::vector<int> v2{10, 0, 30, 0, 50};
    Print(v2);

    auto remove_start = std::remove(v2.begin(), v2.end(), 0);
    Print(v2);

    v2.erase(remove_start, v2.end());
    Print(v2);
    std::cout << std::endl;

    std::vector<int> v3{10, 0, 30, 0, 50};
    Print(v3);

    v3.erase(std::remove(v3.begin(), v3.end(), 0), v3.end());
    Print(v3);
    std::cout << std::endl;

    std::vector<int> l{10, 0, 30, 0, 50};
    Print(l);

    l.erase(std::remove(l.begin(), l.end(), 0), l.end());
    Print(l);
}
