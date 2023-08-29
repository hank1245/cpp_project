#include <iostream>

class Human {
  public:
    // default값 줄 수 있다.
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