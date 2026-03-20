#include <stdio.h>
#include <stdarg.h>

int average(int count, ...) {
    va_list ap;
    int i, total = 0;
    
    va_start(ap, count);
    
    for (i = 0; i<count; i++) {
        total += va_arg(ap, int);
    }
    
    va_end(ap);
    
    return (int)total/count;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    
    return 0;
}
