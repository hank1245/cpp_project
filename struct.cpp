#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled = true;
};

void printStudent(student student);

int main() {
    // struct = 관련있는 데이터타입이 다른 변수들을 하나로 묶는다. 구조체
    //  묶이는 요소들은 member라고 한다.
    //  .으로 접근한다 class member access operator
    // 새로운 데이터타입을 하나 생성한다고 보면 된다.
    // 클래스를 안쓰고 이걸 쓸 이유가 있나?
    student student1;
    student1.name = "sponge";
    student1.gpa = 3.2;
    printStudent(student1);

    return 0;
}
// struct는 배열처럼 주솟값이 아니라 value값이고 original말고 복사된 값으로
// 전달된다. original을 변경하고 싶으면 마찬가지로 &로 주솟값 전달하면 된다
void printStudent(student student) { std::cout << student.gpa << '\n'; }