#include <cmath>
#include <ctime>
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
    using std::getline;
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

    // Temperature conversion
    // char unit;
    // double temp;
    // cout << "******************Temperature conversion***************\n";
    // cout << "F = Farenheit\n";
    // cout << "C = celcius\n";
    // cout << "What unit would you like to convert to:";
    // cin >> unit;
    // if (unit == 'F' || unit == 'f') {
    //     cout << "Enter the celcius: ";
    //     cin >> temp;
    //     temp = (1.8 * temp) + 32.0;
    //     cout << "temperature in Farenheit: " << temp << "°F\n";

    // } else if (unit == 'C' || unit == 'c') {
    //     cout << "Enter Farenheit:";
    //     cin >> temp;
    //     temp = (temp - 32) / 1.8;
    //     cout << "temperature in celcius: " << temp << "°C\n";

    // } else {
    //     cout << "please enter F or C";
    // }
    // cout << "************************";

    // string methods
    //  string name;
    //  cout << "Enter your name: ";
    //  getline(cin, name);
    //  if (name.empty()) {
    //      cout << "Your name is empty";
    //  } else {
    //      name.clear();
    //      name = "Bro";
    //      name.append("@gmail.com");
    //      cout << "Hello " << name;
    //      name.insert, name.at()
    //      name.insert은 2개의 인자를 받는다 몇번째에 어떤 문자를 넣을지
    //      name.find(' ')
    //      name.erase(0,3)

    // }
    // while(true) {}

    // do while loop
    // do 안에 있는것들을 먼저 시행하고 while의 조건이 true인지 체크
    // int number;
    // do {
    //     cout << "Enter positive number: ";
    //     cin >> number;
    // } while (number < 0);

    // for loop에서 i는 index의 약자를 뜻함
    // 구구단
    // for (int i = 2; i < 10; i++) {
    //     for (int j = 1; j < 10; j++) {
    //         if (j == 3) {
    //             continue;
    //         }
    //         cout << i << 'X' << j << "=" << i * j << '\n';
    //     }
    // }

    // 랜덤
    // srand는 난수표를선택하는 함수 난수표 선택은 time을 인자로 함
    // rand는 0부터 32767사이의 숫자를 생성함
    // c++에서는 Null이 0으로 정의된다
    // srand(time(NULL));
    // int num1 = (rand() % 6) + 1;
    // int num2 = (rand() % 6) + 1;
    // int num3 = (rand() % 6) + 1;

    // cout << num1 << '\n';
    // cout << num2 << '\n';
    // cout << num3 << '\n';

    // random event generator

    // srand(time(0));
    // int randNum = rand() % 5;
    // switch (randNum) {
    // case 1:
    //     cout << "You win a sticker";
    //     break;
    // case 2:
    //     cout << "t-shirt";
    //     break;
    // case 3:
    //     cout << "free lunch";
    //     break;
    // case 4:
    //     cout << "car";
    //     break;
    // case 5:
    //     cout << "house";
    //     break;
    // }

    // 숫자 맞추기 게임
    // srand(time(0));
    // int random = (rand() % 100);
    // int guess;
    // int tries = 0;
    // cout << "*************Guessing Number Game*************\n";
    // cout << "Guess the number 0 to 100! \n";
    // while (guess != random) {
    //     tries++;
    //     cout << "Insert Number: ";
    //     cin >> guess;
    //     if (guess > random) {
    //         cout << "Too High! \n";
    //     } else if (guess < random) {
    //         cout << "Too Low! \n";
    //     } else {
    //         cout << "Correct!\n";
    //         cout << "tries: " << tries << '\n';
    //     }
    // }
    // cout << "*************End Game*************";

    return 0;
}