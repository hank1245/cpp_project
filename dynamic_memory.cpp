#include <iostream>

int main() {
    using std::cout;
    using std::string;
    // dynamic memory 동적 메모리
    // 프로그램이 컴파일되고 런타임인 도중에 할당되는 메모리
    // 얼마만큼의 메모리가 필요할지 모를때 사용한다
    // user input을 얼마나 받을지 모르겠다거나 할 경우
    // 프로그램이 더 유연해진다.
    // new operator 메모리를 stack대신 heap에 할당할때 사용
    // 코드 세그먼트, 데이터 세그먼트, 힙 세그먼트, 스택 세그먼트
    // 프로그램이 운영체제로부터 할당받는 4가지 메모리 공간이다.
    // heap은 동적으로 할당된 것들, stack == 콜 스택. 함수 등
    // 더이상 메모리를 사용하지 않을때 delete operator
    // dynamic memory의 특별한점은 compile time에 초기화되어있지 않은 변수를
    // 배열 크기 지정에 사용하능한점
    // new 했으면 어느 시점에서는 반드시 delete를 해야한다.
    char *pGrades = NULL;
    int size;
    cout << "HOw many grades to enter?";
    std::cin >> size;
    // heap영역의 주소를 저장한다. data type으로 어느 정도 크기로 만들건지 지정
    pGrades = new char[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }
    // 해당 주소의 메모리를 free
    // array를 delete하려면 뒤에 []붙이기 원래는 그냥 포인터만
    delete[] pGrades;
    return 0;
}