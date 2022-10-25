#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - prints the converted string to integer
 * @*s: character to be printed
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	/* Converting a numeric string to integer */

	char str[10] = "100";
	int s = atoi(str);

	printf("Converting '100': %d\n", s);

	return (0);
}
