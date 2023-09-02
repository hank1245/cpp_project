#include <iostream>

class Animal {
    // 내부의 멤버들이 accessable한지 설정
    // 메소드, 어트리뷰트 둘 다 상속 가능하다.
    // 클래스 사이에 중복되는것이 있으면 부모 클래스로 뺌으로써 재사용성 향상
  public:
    // 모든 객체나 상속받는 클래스는 아래 attribute를 가질것이다
    // private 메소드도 있다.
    bool alive = true;
    void eat() { std::cout << "Eating!"; }
};

class Dog : public Animal {
  public:
    void bark() { std::cout << "Woof!\n"; }
};

class Cat : public Animal {
  public:
    void meow() { std::cout << "meow\n"; }
};

int main() {
    Dog dog;
    Cat cat;
    std::cout << dog.alive << "\n";
    cat.eat();
    return 0;
}