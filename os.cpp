#include <algorithm>
#include <iostream>
#include <vector>
struct Data {
    int x;
    Data(int x = 0) : x(x) {}
    ~Data() { std::cout << "Destr.: " << x << std::endl; }
};
std::ostream &operator<<(std::ostream &os, const Data &d) {
    os << d.x;
    return os;
}
template <class T> class A {
    std::shared_ptr<T> p;

  public:
    A(int x = 0) : p(new T(x)) {}
    T &get() const { return *p; }
    A copy() {
        A a(p->x);
        return a;
    }
};
int main() {
    A<Data> a1, a2(10), a3(20), a4(30);
    std::cout << a1.get() << std::endl;
    std::cout << a2.get() << std::endl;
    std::cout << a3.get() << std::endl;
    std::cout << a4.get() << std::endl;
    a1 = a2.copy();
    a3 = a4;
    std::cout << a1.get() << std::endl;
    std::cout << a2.get() << std::endl;
    std::cout << a3.get() << std::endl;
    std::cout << a4.get() << std::endl;
}
