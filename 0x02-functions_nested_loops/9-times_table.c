#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (k > 9)
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar('0' + k);
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
