#include "main.h"
/**
 * print_last_digit - used to print the last line
 * @x: parameter of a function
 *
 * Return: Last digit of a given num
 */
int print_last_digit(int x)
{
	int i, n, a, j, q;

	n = 0 - 10;
	a = 1 - 2;

	if (x > 10)
	{
		i = x % 10;
		_putchar(48 + i);
		return (i);
	}
	else if (x < 10 && x >= 0)
	{
		_putchar(48 + x);
		return (x);
	}
	else if (x > n && x <= a)
	{
		j = x * a;
		_putchar(48 + j);
		return (j);
	}
	else
	{
		q = (x % 10) * a;
		_putchar(48 + q);
		return (q);
	}
}
