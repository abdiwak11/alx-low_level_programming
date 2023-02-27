#include "main.h"

/**
 * puts2 - prints a string
 * @str:  a parameter thats printed out
 * Return:  a string
 */

void puts2(char *str)
{
	int i, j;

	fir (j =0 ; str[j] != '\0'; j++)
		;
	for (i = 0; i < j / 2; i++)
	{
		if (i == 0)
			_putchar(str[i]);
		else
			_putchar(str[i * 2]);
	}

	_putchar('\n');
}
