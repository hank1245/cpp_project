#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <string>
#include <vector>

class Ex {
    int x;

  public:
    Ex(int x = 0) : x(x) {}
    int Get() const { return x; }
};

class Vector {
    int x, y;

  public:
    Vector(int x, int y) : x(x), y(y) {}
    friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    int operator*(const Vector &v) const { return v.x * x + v.y * y; }
};

std::ostream &operator<<(std::ostream &os, const Vector &v) {
    os << v.x << ", " << v.y;
    return os;
}

class B {
    int x;

  public:
    B(int first) : x(first) {}
    void Print() const { std::cout << x; }
};

class D : public B {
    int y;

  public:
    D(int x, int y) : B(x), y(y) {}
    void Print() const {
        B::Print();
        std::cout << "," << y;
    }
};

class P {
  protected:
    int x;

  public:
    P(int x) : x(x) {}
    virtual int Get() const { return x; }
};

class S : public P {
    int y;

  public:
    S(int x, int y) : P(x), y(y) {}
    // 오버라이딩은 상속관계에서 하는것으로 override생략 가능하고 virtual아니면
    // 에러 난다
    int Get() const override { return x * y; }
};

template <class T> T Divide(const T &x1, const T &x2) { return x1 / x2; }

// 함수 오버로딩으로 다른 인자 받아도 가능하도록 구현

int Sum(const std::vector<int>::iterator &begin,
        const std::vector<int>::iterator &end) {
    int sum = 0;
    std::vector<int>::iterator iter = begin;
    while (iter != end) {
        sum += *iter;
        iter++;
    }
    return sum;
}

std::string Sum(const std::vector<std::string>::iterator &begin,
                const std::vector<std::string>::iterator &end) {
    std::string sum;
    std::vector<std::string>::iterator iter = begin;
    while (iter != end) {
        sum += *iter;
        iter++;
    }
    return sum;
}

/////////// 답안 끝
int main() {
    // 전역 변수 및 표준 함수 사용 금지(Do not use global variables and standard
    // functions)
    std::cout << "\n### 1 ###" << std::endl;
    // 1(2). 아래와 같이 동작하는 Ex 클래스를 정의하라. - 함수, 변수 및 수식의
    // 사용을 최소화
    Ex e1, e2(1);
    const Ex e3(2);
    std::cout << e1.Get() << ", " << e2.Get() << ", " << e3.Get()
              << std::endl; // 출력: 0, 1, 2

    std::cout << "\n### 2 ###" << std::endl;
    // 2(2). 아래와 같이 동작하는 Vector 클래스와 << 연산자(비멤버)를 정의하라.
    // - 함수, 변수 및 수식의 사용을 최소화
    const Vector s1(2, 3), s2(5, -1);
    std::cout << s1 << "     " << s2 << std::endl; // 출력: 2, 3     5, -1
    std::cout
        << s1 * s2
        << std::endl; // 출력: 7 <- (2*5 + 3*-1), define it as a member method
    std::cout << "\n### 3 ###" << std::endl;
    // 3(3). 아래와 같이 동작하는 B와 D 클래스를 정의하라. - B는 D의 base class,
    // 함수, 변수 및 수식의 사용을 최소화
    B b(1);
    D d(3, 4);
    b.Print(); // 출력: 1
    std::cout << std::endl;
    d.Print(); // 출력: 3, 4
    std::cout << std::endl;
    b = static_cast<B>(d);
    b.Print(); // 출력: 3
    std::cout << std::endl;
    std::cout << "\n### 4 ###" << std::endl;
    // 4(3). 아래와 같이 동작하는 P와 S 클래스를 정의하라. - P는 S의 base class,
    // 함수, 변수 및 수식의 사용을 최소화
    P p(2);    // Get returns 2
    S s(3, 5); // Get returns 3*5
    P *ptr = &p;
    std::cout << ptr->Get() << std::endl; // 출력: 2
    ptr = &s;
    std::cout << ptr->Get() << std::endl; // 출력: 15
    std::cout << "\n### 5 ###" << std::endl;
    // 5(3). 아래와 같이 동작하는 Divide 함수 템플릿을 정의하라. - 함수, 변수 및
    // 수식의 사용을 최소화
    std::cout << Divide(3, 2) << std::endl;   // 출력: 1 <- 3/2
    std::cout << Divide(3., 2.) << std::endl; // 출력: 1.5 <- 3./2.
    std::cout << "\n### 6 ###" << std::endl;
    // 6(3). 아래 코드에서 v1의 요소에서 3의 배수의 개수를 출력하도록 [A] 위치에
    // 람다 함수를 정의하라. - 함수, 변수 및 수식의 사용을 최소화
    std::vector<int> v1{1, 2, 3, 6, 4, 9, 1};
    std::cout << std::count_if(v1.begin(), v1.end(), [](int x) {
        return !(x % 3);
    }) << std::endl; // 출력: 3
    std::cout << "\n### 7 ###" << std::endl;
    // 7(4). 아래와 같이 동작하는 두 개의 Sum 함수를 정의하라. - 함수, 변수 및
    // 수식의 사용을 최소화
    std::vector<int> w{1, 2, 3, 4, 5};
    std::vector<std::string> str{"C++", " ", "Programming"};
    // type of w iterator: std::vector<int>::iterator
    // type of str iterator: std::vector<std::string>::iterator
    std::cout << Sum(w.begin(), w.end()) << std::endl; // 출력: 15
    std::cout << Sum(str.begin(), str.end())
              << std::endl; // 출력: C++ Programming
}