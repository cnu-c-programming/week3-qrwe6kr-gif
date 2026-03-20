#include <stdio.h>
static int add(int a, int b) {
    return a+b;
}
static int sub(int a, int b) {
    return a-b;
}
static int mul(int a, int b) {
    return a*b;
}
static int div(int a, int b) {
    return a/b;
}

int main(void) {
    int a = 10;
    int b = 5;
    
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, div(a, b));
    
    

    return 0;
}
