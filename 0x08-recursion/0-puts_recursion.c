#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by new line
 * @s: string
 * Returns: strings of a given
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
	}
}
