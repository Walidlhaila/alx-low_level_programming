#include <stdio.h>

/**
 * Generates and prints the fibonacci sequence up to the given number of terms.
 *
 * @param n The number of terms in the Fibonacci sequence to generate.
 */
void fibonacci_sequence(int n)
{
	int i;
	unsigned long fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < n; i++)
	{
		printf("%lu", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

/**
 * The entry point of the program.
 *
 * @return The exit status of the program.
 */
int main(void)
{
	fibonacci_sequence(50);
	return (0);
}
