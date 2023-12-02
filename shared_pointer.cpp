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

/*
이 코드는 Data 구조체와 A 템플릿 클래스를 사용하여 데이터를 관리하는 방법을
보여줍니다.

Data 구조체는 하나의 변수 x를 가지고 있고, 객체가 파괴될 때 소멸자가 호출되어
해당 객체의 x 값을 출력합니다. A 템플릿 클래스는 shared_ptr<T> 멤버 변수를
가지고 있어서 동적 메모리를 관리합니다. A 클래스는 copy 멤버 함수를 통해 자신의
복사본을 만들 수 있습니다. main 함수에서는 A<Data> 형식의 a1, a2, a3, a4 객체를
생성합니다. a2, a3, a4는 각각 초기값으로 10, 20, 30을 가집니다. 각 객체의 get
멤버 함수를 통해 Data 객체의 x 값을 출력합니다. a1 = a2.copy(); 코드는 a2의
복사본을 만들고 그 복사본을 a1에 할당합니다. 이 때, a1이 가리키던 Data 객체는
파괴되어 소멸자가 호출됩니다. a3 = a4; 코드는 a4가 가리키는 Data 객체의
shared_ptr를 a3에 복사합니다. 이 때, a3이 가리키던 Data 객체는 레퍼런스 카운트가
0이 되어 파괴되고, 소멸자가 호출됩니다. 마지막으로 각 객체의 Data 객체의 x 값을
다시 출력합니다. 이 프로그램을 실행하면, Data 객체의 소멸자에서 출력되는
메시지를 통해 어떤 객체가 언제 파괴되는지 알 수 있습니다. 또한 shared_ptr를
사용하여 메모리를 안전하게 관리하는 방법을 볼 수 있습니다.
*/