#include<stdio.h>

void add(int a, int b) {
    printf("a + b: %d\n", a+b);
}

void multiply(int a, int b) {
    printf("a*b: %d\n", a*b);
}

void subtract(int a, int b) {
    printf("a - b: %d\n", a-b);
}

int main() {
    // changes in main
    add(2, 4);
    multiply(3, 6);
    subtract(5, 3);
    printf("Hello, from main");
    return 0;
}