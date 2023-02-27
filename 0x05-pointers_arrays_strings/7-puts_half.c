#include "main.h"

/**
 * puts_half - prints a string
 * @str:  a parameter thats printed out
 * Return:  a string
 */

void puts_half(char *str)
{
	int i, j;

	for (j = 0; str[j] != '\0'; j++)
		;
	for (i = (j / 2) + 1; i < j; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
