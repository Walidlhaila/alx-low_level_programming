#include <stdio.h>

void fibonacci_sequence(int n) {
    int i;
    unsigned long long fib[50];  // Use unsigned long long to handle large Fibonacci numbers
    
    fib[0] = 1;
    fib[1] = 2;
    
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for (i = 0; i < n; i++) {
        printf("%llu", fib[i]);
        if (i != n-1) {
            printf(", ");
        }
    }
    
    printf("\n");
}

int main() {
    fibonacci_sequence(50);
    return 0;
}
