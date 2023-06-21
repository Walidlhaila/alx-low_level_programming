#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 * Description: This function prints the multiplication table for the numbers
 * 0 through 9. Each row represents a number, and each column
 * represents the product of that number multiplied by another
 * number from 0 to 9.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
					 _putchar(' ');
			}
			if (product > 9)
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
