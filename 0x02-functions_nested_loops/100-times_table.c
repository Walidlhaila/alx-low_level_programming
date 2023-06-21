#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of times table to print.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i;
    int j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;
            if (j == 0)
                printf("%d", result);
            else
                printf(", %3d", result);
        }
        printf("\n");
    }
}
