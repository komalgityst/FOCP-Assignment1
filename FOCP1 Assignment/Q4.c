#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("Using temp: a=%d b=%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using arithmetic: a=%d b=%d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Using XOR: a=%d b=%d\n", a, b);

    int *p1 = &a, *p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Using pointers: a=%d b=%d\n", a, b);

    return 0;
}