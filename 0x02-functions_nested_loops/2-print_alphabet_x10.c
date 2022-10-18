#include "main.h"
/**
 * print_alphabet - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void) /* to print 10 times in lowercase */
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter)
		_putchar('\n');
	}
}
