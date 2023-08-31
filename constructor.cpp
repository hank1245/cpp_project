#include <iostream>

class Student {
  public:
    std::string name;
    int age;
    double gpa;
    Student(std::string name, int age, double gpa) {
        // this키워드는 parameter랑 attibute이름이 다르다면 생략 가능
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    Student(std::string name, double gpa) {
        // 생성자 오버로딩이 가능. parameter다르면 같은이름으로 여러개의 생성자
        // 만들수있음
        this->name = name;
        this->gpa = gpa;
    }
    Student() { this->name = "unknown"; }
};

int main() {
    using std::cout;
    // constructor 생성자 instance생성이 실시될때 자동으로 호출되는 메소드
    // 따로 생성하지 않아도 자동으로 존재한다
    //  Student student1("Hank")이라고 할때 constructor에 parameter전달하는
    //  것이다.

    Student student1("Hank", 22, 3.5);
    Student student2("Mark", 23, 3.1);
    // 인자가 없으면 괄호 사용하면 안된다
    Student student3;
    cout << student1.name << '\n';
    cout << student3.name << '\n';

    return 0;
}