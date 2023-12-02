#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <vector>

template <class iterator> void Print(iterator begin, iterator end) {
    for (iterator iter = begin; iter != end; iter++)
        std::cout << *iter << ", ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> v1{10, 20, 30, 40, 50};
    Print(v1.begin(), v1.end());
    Print(v1.begin(), v1.end() - 2);

    int sum = std::accumulate(v1.begin(), v1.end(), 0);
    std::cout << sum << std::endl;

    sum = std::accumulate(v1.begin(), v1.end() - 2, 0);
    std::cout << sum << std::endl;
}
