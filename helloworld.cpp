#include <cmath>
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
    using std::cin;
    using std::cout;
    using std::string;
    //::는 scope resolution operator 객체 참조라고 생각하면 된다. namespace도
    //: 객체이기 때문에
    // using namespace std;
    // std::string name = "bro";
    // std::string day = "Friday";
    // std::cout << "hello " << name << '\n';
    // std::cout << "This is " << day;

    // using namespace second;
    // cout << x;

    // text_t name = "Hank";
    // cout << name;

    // arithmetic operators 산술 연산자
    // int students = 10;
    // students += 2;
    // students -= 10;
    // students /= 2;
    // students *= 2;
    // students++;

    // type conversion
    //  explicit
    // double x = (int)3.14;
    // cout << x;
    // implicit
    // int y = 3.14;
    // cout << y;
    // char x =100;
    // cout << x ;// d 아스키코드로 변환
    // cout << (char) 100
    // integer division은 1보다 작으면 0이 된다
    // int correct = 8;
    // int question = 10;
    // double score = correct / (double)question * 100;
    // cout << score << "%";

    // cin
    // using std::cin;

    // string name;
    // int age;
    // cout << "what is your age";
    // cin >> age;
    // // cin다음 getline이 오면 넘어가는 문제가 존재함. cin은 버퍼에 자동으로
    // \n을
    // // 남기기 때문에 getline이 새로운 인풋이 들어왔다고 인식함.
    // cout << "What is your name: ";
    // std::getline(cin >> std::ws, name);
    // cout << "hi " << name;

    // math function
    //  double x = 3;
    //  double y = 4;
    //  double z;

    // z = std::max(x,y);
    // cmath 라이브러리 내의 함수
    // z = pow(3,4);
    // z = sqrt(9);
    // z = abs(-3);

    // 직각삼각형 빗변 길이 계산기
    // double a;
    // double b;
    // double c;
    // cout << "a길이: ";
    // cin >> a;
    // cout << "b길이: ";
    // cin >> b;
    // c = sqrt(pow(a, 2) + pow(b, 2));
    // cout << "빗변 길이: " << c;

    // if statement
    //  int age;
    //  cin >> age;
    //  if (age <= 18) {
    //      cout << "You are too young";
    //  } else if (age > 100) {
    //      cout << "You are too old for this";
    //  } else {
    //      cout << "welcome";
    //  }

    // switch
    // int month;
    // cin >> month;
    // switch (month) {
    // case 1:
    //     cout << "It is january";
    //     break;
    // default:
    //     cout << "Please enter number 1";
    //     break;
    // }

    // ternary operator
    //  if else 대체하는 문법
    // 삼항연산자
    // int number = 9;
    // number % 2 ? cout << "홀수" : cout << "짝수";

    // logical operator
    // int temp;
    // std::cout << "Enter the temperature: ";
    // std::cin >> temp;
    // if (temp > 0 && temp < 30) {
    //     std::cout << "The temp is good";
    // } else {
    //     std::cout << "The temp is bad";
    // }

    return 0;
}