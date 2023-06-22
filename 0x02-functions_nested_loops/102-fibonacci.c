
#include <stdio.h>

int main(void) {
    long prev = 1;
    long current = 2;
    long next;

    long sum = 2; // Start with sum as 2 since the second term is even

    while (current <= 4000000) {
        next = prev + current;
        prev = current;
        current = next;

        if (current % 2 == 0) {
            sum += current;
        }
    }

    printf("%ld\n", sum);
    return 0;
}
