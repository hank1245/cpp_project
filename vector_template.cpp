#include <iostream>

template <typename T> class Vector {
  public:
    T x, y;
    Vector(T x = 0, T y = 0) : x(x), y(y) {}
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Vector<T> &v) {
    os << v.x << ", " << v.y;
    return os;
}

std::ostream &operator<<(std::ostream &os, const Vector<char> &v) {
    os << static_cast<int>(v.x) << ", " << static_cast<int>(v.y);
    return os;
}

int main() {
    Vector<int> v1(1234, 32644);
    Vector<char> v2(121, 22);
    Vector<double> v3(1.32, 2.234);
    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;
}

// char 타입의 값이 문자로 출력되는 것을 방지하기 위함입니다.