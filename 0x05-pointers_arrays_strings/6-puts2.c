#include "main.h"

/**
 * puts2 - prints a string
 * @str:  a parameter thats printed out
 * Return:  a string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
			_putchar(str[i]);
		else
			_putchar(str[i + 1]);
	}

	_putchar('\n');
}
