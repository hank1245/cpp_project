#include <stdio.h>

int main(void) {
    int x[2][3] = {1, 2, 3, 4, 5, 6};
    printf("%d", *x[0]);
    printf("\n");
    printf("%p", x[0]);
    printf("\n");
    printf("%p", &x[0][0]);
    printf("\n");
    printf("%p", &x[0]);
    printf("\n");
    printf("%p", x);
}