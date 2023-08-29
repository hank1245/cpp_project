#include <iostream>

void swap(std::string &x, std::string &y);

int main() {
    // multidimensional array
    // 크기를 지정하지 않으려면 row size는 비워둘 수 있지만 column사이즈는
    // 비워둘 수 없음
    using std::cout;
    using std::string;
    // string cars[][3] = {{"Mustang", "Escape", "F-150"},
    //                     {"Cor", "Eq", "Siver"},
    //                     {"chall", "durang", "Ram"}};
    // cout << cars[0][0] << " ";
    // cout << cars[0][1] << " ";
    // cout << cars[0][2] << "\n";
    // cout << cars[1][0] << " ";
    // cout << cars[1][1] << " ";
    // cout << cars[1][2] << "\n";
    // cout << cars[2][0] << " ";
    // cout << cars[2][1] << " ";
    // cout << cars[2][2] << " ";
    // int rows = sizeof(cars) / sizeof(cars[0]);
    // int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < columns; j++) {
    //         cout << cars[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    // memory address = 데이터가 저장된 메모리 주소
    //& - address-of operator
    // string name = "Bro";
    // int age = 21;
    // bool student = true;
    // cout << &name << '\n';
    // cout << &age << '\n';
    // cout << &student << '\n';

    // pass-by value, pass-by reference
    // 함수로 값을 전달할때 passing by value이다 보통
    // 즉 같은 값을 가진 복사체를 전달한다.
    // 그래서 함수 내에서 서로 바꾸는 작업을 진행해도 main함수의 x,y는 바뀌지
    // 않는다 복사체끼리 값이 바뀐것이다. 그래서 original값을 바꾸고 싶은거라면
    // reference를 passing해주면 된다 &연산자를 통해서 그래서 웬만하면 pass by
    // reference를 사용해야한다.
    // string x = "kool";
    // string y = "aid";
    // swap(x, y);
    // cout << "x: " << x << '\n';
    // cout << "y: " << y << '\n';

    // const parameter = 함수에서 받은 인자를 변경하지 못하게 해준다 read-only
    // 함수에 인자 전달하는것은 같은 값을 가지는 copy를 만드는것
    // 그래서 함수 안에서 값을 바꿔도 original에 전달되지는 않아서 괜찮다.
    // 하지만 주소값을 전달한다면 값을 변경할때 큰일이 일어날 수 있음
    // 그래서 pointer를 사용할때 const를 많이 사용한다.
    return 0;
}

// void swap(std::string &x, std::string &y) {
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }