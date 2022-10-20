#include "main.h"

/**
 * times_table - print the n times table
 * @n: number of times the times table should print
 */
void print_times_table(int n)
{
	int num, mult, prod;

	for (num = 0; num <= n; mult++)
	{
		_putchar('0');

		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= n)
				_putchar(' ');
			else
				_putch;
			_putchar((prod % 10) + '0');
		}
		if (n > 15 || n < 0)
			_putchar(void)
			return (0);
	}
}
