#include "main.h"

/**
 * _print_rev_recursion - function that reverse the string
 * @s: string
 * Returns: reverted string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(s[0]);
	}
	else
		_putchar('\n');
}
