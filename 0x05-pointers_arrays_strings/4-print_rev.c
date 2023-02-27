#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string thats going to be printed in reverse
 * Return: a reversed string
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s != '\0'; i++)
		;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
