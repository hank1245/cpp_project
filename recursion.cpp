#include <iostream>

int fib(int x);

int main() {
    // recursion 재귀
    // 함수 안에서 함수호출 또 호출..
    // 일반적으로 느리고 메모리도 많이 잡아먹는다
    // 하지만 알고리즘에서 유용하게 사용되는 경우가 많다.
    // 보통 for이 if로 바뀌고 조건부로 함수호출 하는 모습
    std::cout << fib(5) << '\n';
    return 0;
}

int fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x - 1) + fib(x - 2);
}