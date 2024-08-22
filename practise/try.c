#include<stdio.h>

void subtract(int a, int b) {
    printf("a - b = %d\n", a-b);
}

int main() {
    subtract(3, 1);
    printf("Hello, from main");
    return 0;
}