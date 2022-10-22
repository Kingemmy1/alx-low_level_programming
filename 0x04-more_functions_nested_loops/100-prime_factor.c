#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 * @large_factor: the highest factor to be printed
 * @i: integer to be checked
 */
int main(void)
{
	long int number = 612852475143;

	large_factor = 2081;

	i = 10000000
	
	large_factor = 0;

	while  (number != 1)
	{
		if (number % i == 0)
		{
			while (number % i == 0)
			{
				printf("%ld\t", i);
				number = i;
			}
			large_factor = i;

		}
		i++;
	}
	printf("\n\nThe largest prime factor is: %lld\n\n", large_factor);
	return (0);
}
