#include <iostream>
#include <list>
#include <vector>

int main() {
    std::vector<int> v{10, 20, 30, 40, 50};
    std::list<int> l{1, 2, 3, 4, 5};

    for (std::vector<int>::iterator iter = std::begin(v); iter != std::end(v);
         iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (auto iter = std::begin(v); iter != std::end(v); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (auto iter = v.begin(); iter != v.end(); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (std::vector<int>::reverse_iterator iter = v.rbegin(); iter != v.rend();
         iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (auto iter = v.rbegin(); iter != v.rend(); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (auto iter = std::begin(l); iter != std::end(l); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (auto iter = l.begin(); iter != l.end(); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;

    for (auto iter = l.rbegin(); iter != l.rend(); iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;
}
