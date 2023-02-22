#include "main.h"
/**
 * print_times_table - the function that prints 9 times
 *
 * Return: the tabel
 */
void print_times_table(int n)
{
	int i, j, x;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			x = i * j;
			if (x > 9)
			{
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (j == 0)
				{
					_putchar(48 + x);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(48 + x);
					if (j == 9)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
