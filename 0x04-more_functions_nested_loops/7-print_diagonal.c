#include "main.h"
/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \
 * Return: void
 */
void print_diagonal(int n)
{
	int i, x;
	i = 0;

	while (i < n && n > 0)
	{
		x = 0;
		while (x < i)
		{
			_putchar(' ');
			x++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
