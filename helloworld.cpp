#include <iostream>
// namespace가 다르면 이름이 같아도 충돌나지 않음
// namespace first {
//     int x = 1;
// }

// namespace second {
//     int x = 2;
// }

// type aliasing에 사용한다. 타입의 별칭
// typedef std::string text_t;
// typedef보다 template과 더 잘 맞는 using을 사용함
using text_t = std::string;

int main() {
    //::는 scope resolution operator 객체 참조라고 생각하면 된다. namespace도
    //:객체이기 때문에
    // using namespace std;
    using std::cout;
    using std::string;
    // std::string name = "bro";
    // std::string day = "Friday";
    // std::cout << "hello " << name << '\n';
    // std::cout << "This is " << day;

    // using namespace second;
    // cout << x;

    // text_t name = "Hank";
    // cout << name;

    // arithmetic operators 산술 연산자
    int students = 10;
    students += 2;

    return 0;
}