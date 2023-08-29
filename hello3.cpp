#include <cstdio>
#include <ctime>
#include <iomanip>
#include <iostream>

double getTotal(double prices[], int size);
int searchArray(int numbers[], int size, int myNum);

int main() {
    using std::cin;
    using std::cout;
    using std::string;
    // Array
    // string cars[] = {'Camaro',"Benz,"BMW"}
    // 크기 지정하지 않고 배열을 만들 수 있다
    // 같은 타입의 변수만 넣을 수 있다
    // 크키 지정하지 않는 경우 값을 비워놓을 수 없다
    // 배열의 이름은 cars가 되고 값은 메모리 주솟값이다.

    // string cars[3];
    // cars[0] = "Caramaro";
    // cout << cars[1] << '\n';

    // sizeof operator
    // sizeof string은 32거나 24로 고정. os에 따라서 다를 수 있다
    // 길이가 길어져도 크기가 커지지 않는 이유는 reference datatype이라서
    // 주솟값만을 저장하기 때문이다.
    // double gpa = 2.5;
    // char d = 'd';
    // std::string name = "Bro code";
    // char grades[] = {'A', 'B', 'C'};
    // string students[] = {"Sponge", "Bob", "Patrick", "Squid"};
    // 배열의 크기(element의 갯수)를 알아낼 수 있다
    // cout << sizeof(students) / sizeof(string);

    // char grades[] = {'A', 'B', 'C', 'D', 'F'};
    // for (int i = 0; i < sizeof(grades) / sizeof(char); i++) {
    //     cout << grades[i] << '\n';
    // }

    // forEach loop
    // int grades[] = {65, 72, 81, 93};
    // for (int grade : grades) {
    //     cout << grade << '\n';
    // }
    // double prices[] = {34.6, 15.4, 95.3};
    // int size = sizeof(prices) / sizeof(double);
    // cout << getTotal(prices, size);

    // linear search
    // sizeof를 쓸때 int로 나누지 않고 첫번째 요소로 해도 결과는 같다.
    //  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //  int size = sizeof(numbers) / sizeof(numbers[0]);
    //  int index;
    //  int myNum;
    //  cout << "Enter number to find\n";
    //  cin >> myNum;
    //  index = searchArray(numbers, size, myNum);
    //  if (index != -1) {
    //      cout << index << "th number";
    //  } else {
    //      cout << "not found";
    //  }

    return 0;
}

// int searchArray(int numbers[], int size, int myNum) {
//     for (int i = 0; i < size; i++) {
//         if (numbers[i] == myNum) {
//             return i;
//         }
//     }
//     return -1;
// }
// size를 넘겨주는 이유는 배열을 넘겨줄 때 주솟값으로 decay되기 때문. 그래서
// size를 같이 넘겨줘야한다. 배열 자체를 넘겨주는 방법은 없다
//  double getTotal(double prices[], int size) {
//      double total;
//      for (int i = 0; i < size; i++) {
//          total += prices[i];
//      }
//      return total;
//  }
