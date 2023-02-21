#include "main.h"
/**
 * print_sign - prints numbers sign
 *
 * Return: 1 if n is greater than zero and 0 if zero and -1 if its less than 0
 * @n: parameter we test
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
