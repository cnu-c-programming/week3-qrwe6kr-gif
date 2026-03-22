#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list ap;
    int total = 0;
    va_start(ap, count);
    
    for (int i = 0; i<count; i++) {
        if (type=='S') {
            printf("%s", va_arg(ap, char *));
            if(i<count-1) printf(" ");
            
        } else if (type=='C') {
            printf("%c", va_arg(ap, int));
            
        } else if (type=='D') {
            total += va_arg(ap, int);
        }
    }
    if (type=='D') {
        printf("%d", total);
    }
    
    va_end(ap);
    printf("\n");
    
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);
    
    return 0;
}
