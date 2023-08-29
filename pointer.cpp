#include <iostream>

int main() {
    using std::cout;
    using std::string;
    // pointer 다른 변수의 memory address를 저장하는 변수
    // 값을 지정해주는것보다 특정한 값이 저장된 곳의 주소를 알려주는게 쉬운
    // 경우가 있기 때문에
    //  * dereference operator
    // string name = "Bro";
    // int age = 21;
    // string freePizzas[5];
    // fill(freePizzas, freePizzas + 5, "Pizza");
    // string *pName = &name;
    // int *pAge = &age;
    // 배열은 &를 쓸 필요없다 이름 자체가 주솟값을 가지고 있다. 배열의
    // 주솟값이자 배열의 첫번째 원소의 주솟값이다.
    // string *pFreePizzas = freePizzas;
    // pName이라는 포인터 변수의 주소
    // cout << &pName << '\n';
    // pName안에 들어있는 값(name변수의 주소)
    // cout << pName << '\n';
    // pName이 가리키는 주소에 들어있는 값(name변수의 값)
    // cout << *pName << '\n';

    // cout << *pFreePizzas << '\n';

    // null pointer nullptr
    // null pointer는 어떤 것도 가리키고 있지 않다는 것을 의미하기 위해서 사용함
    // null pointer에 dereference operator를 사용하면 에러 난다
    int *pointer = nullptr;
    int x = 123;
    // pointer = &x;
    if (pointer == nullptr) {
        cout << "address not assigned";
        // cout << *pointer;
    } else {
        cout << "address assigned";
    }

    return 0;
}