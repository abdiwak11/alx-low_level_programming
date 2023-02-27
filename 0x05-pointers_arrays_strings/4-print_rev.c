#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string thats going to be printed in reverse
 * Return: a reversed string
 */

void print_rev(char *s)
{
	int i, j;
	j = _strlen(s);

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
