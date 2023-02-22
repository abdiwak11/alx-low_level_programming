#include "main.h"
/**
 * times_table - the function that prints 9 times
 *
 * Return: the tabel
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;

			if (x > 9)
			{
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
				if (j == 9)
				{
					_putchar('$');
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(48 + x);
				if (j == 9)
				{
					_putchar('$');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
