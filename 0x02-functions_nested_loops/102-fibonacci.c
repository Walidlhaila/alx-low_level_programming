
#include <stdio.h>

int main(void) {
    long prev = 1;
    long current = 2;
    long sum = 0;

    while (current <= 4000000) {
        if (current % 2 == 0) {
            sum += current;
        }

        long next = prev + current;
        prev = current;
        current = next;
    }

    printf("%ld\n", sum);
    return 0;
}
