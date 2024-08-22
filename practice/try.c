#include<stdio.h>

void add(int a, int b) {
    printf("a + b: %d\n", a+b);
}

int main() {
    // changes made by surenthar
    add(2, 4);
    printf("Hello, from main");
    return 0;
}