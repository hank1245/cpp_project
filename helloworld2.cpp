#include <ctime>
#include <iostream>

// function = a block of reusable code
//  함수를 main전에 먼저 선언해놓으면 뒤로 빼놓을수 있다.
// function decoration
// void happyBDay(std::string birthboy);

int square(int length);
int cube(int length);

int myNum = 0;
void printNum();

int main() {
    using std::cin;
    using std::cout;
    using std::string;
    // string name = "Bro";
    // happyBDay(name);

    // double length = 6.0;
    // double area = square(length);
    // double volume = cube(length);
    // cout << "Area: " << area << "\n";
    // cout << "volume: " << volume << "\n";

    // 함수 오버로딩
    // 같은 이름이라도 parameter가 다르면 사용할 수 있다
    // function name + parameter = function signature

    // varible scope
    // printNum();

    // Banking Program
    return 0;
}

// int square(int length) { return length * length; }
// int cube(int length) { return length * length * length; }

// void happyBDay(std::string birthboy) {
//     using std::cout;
//     cout << "Happy Birth day to " << birthboy << "!\n";
//     cout << "Happy Birth day to " << birthboy << "!\n";
//     cout << "Happy Birth day to " << birthboy << "!\n";
//     cout << "Happy Birth day to You!\n\n";
// }

// 함수 바깥에다가 선언하면 global variable 나머지는 local variable.
// 영역이 다르면 같은 이름 사용해도 상관없다
// 하지만 전역공간이 오염되므로 사용하지 않는것이 좋다.
// 전역과 지역 이름 같으면 지역이 우선
// 전역을 사용하려면 scope resoltuion operator사용하면 된다 ::

// void printNum() {
//     int myNum = 2;
//     std::cout << myNum << '\n';
//     std::cout << ::myNum << '\n';
// }