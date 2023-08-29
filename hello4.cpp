#include <iostream>

int main() {
    using std::cin;
    using std::cout;
    using std::string;
    // fill() 특정한 값으로 배열을 채운다. initialization으로 많이 사용
    // const int SIZE = 100;
    // string foods[SIZE];
    // fill(array, array + 1, 0);
    // array배열의 첫 번째 요소에 대한 포인터입니다.
    // array + 1배열의 첫 번째 요소 바로 뒤에 있는 요소에 대한 포인터입니다.
    // C++에서 와 같은 포인터 연산을 수행하면 array + 1기본적으로 포인터가
    // 가리키는 데이터 유형의 크기만큼 메모리 주소가 증가합니다.
    // Fill에서 받는것은 포인터 주소이다. array+1을 하면 정말 +1이 아니라 데이터
    // 유형 크기만큼 메모리 주소 증가
    // fill(foods, foods + (SIZE / 2), "gorilla");
    // fill(foods + (SIZE / 2), foods + SIZE, "giraffe");
    // for (string food : foods) {
    //     cout << food << '\n';
    // }

    // user input을 받아서 array에 넣는 방법
    // array는 static data structure. 프로그램 실행중(runtime)에 사이즈를 변경할
    // 수 없다. 그러면 input을 저장하는 공간의 크기를 미리 알 수 없으므로 크기를
    // 크게 지정할 수 밖에 없는데 그런 경우 메모리 낭비가 많아지는 문제가
    // 발생하기에 dynamic memory를 사용해야한다. 추후에 사용할 예정.
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    string temp;
    for (int i = 0; i < size; i++) {
        cout << "Enter food you like or 'q' to quit #" << i + 1 << '\n';
        std::getline(cin, temp);
        if (temp == "q") {
            break;
        } else {
            foods[i] = temp;
        }
    }
    cout << "You like following food:\n";
    // for loop의 조건이 굳이 숫자가 아니어도 된다는 것. 애초부터 부등식은
    // boolean이지 숫자가 아니었다.
    for (int i = 0; !foods[i].empty(); i++) {
        cout << foods[i] << '\n';
    }
    return 0;
}
