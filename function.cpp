#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char Name[10];
    // gets(Name); 에러 발생 cpp컴파일러를 사용하기 때문
    // gets_s(Name); 가능
    // gets_s(Name, sizeof(Name)); 최적
    // x[i] == *(x+i);
}