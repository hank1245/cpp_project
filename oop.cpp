#include <iostream>

class Human {
  public:
    // default값 줄 수 있다.
    // c++에서 attribute에 아무것도 명시하지 않으면 기본적으로 private이다
    // access modifier
    // private public protected
    // private은 클래스 밖에서 접근 불가
    // public은 클래스 밖에서 접근 가능
    // 메소드도 private이 될 수 있다.
    // 보통 public 메소드에서 private메소드를 호출한다.
    std::string name;
    std::string job;
    int age;
    void eat() { std::cout << "Eating!"; }
    void drink() { std::cout << "Drinking!"; }
};

int main() {
    Human hank;
    hank.name = "Hank";
    hank.job = "scientist";
    hank.age = 22;
    // object직접 사용은 안된다
    // object의 property만 참조할 수 있다
    std::cout << hank.name << '\n';

    hank.eat();
    return 0;
}