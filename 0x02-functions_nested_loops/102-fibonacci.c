#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    unsigned long long int fib1 = 1, fib2 = 2, next;

    printf("%llu, %llu", fib1, fib2);

    for (i = 3; i <= 50; i++)
    {
        next = fib1 + fib2;
        printf(", %llu", next);
        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");

    return 0;
}
