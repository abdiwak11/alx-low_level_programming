#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by new line
 * @s: string
 * Returns: strings of a given
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(*s)
}
