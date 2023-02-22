#include "main.h"
/**
 * print_to_98 - prints
 *
 * @n: number where it starts
 * Return: prints those number
 */
void print_to_98(int n)
{
	int i, k, z;

	if (n <= 0 || n <= 98)
	{
		for(i = n; i <= 98; i++)
		{
			if (i >= 0 && i < 10)
				_putchar(48 + i);
			else if (i >= (-9) && i < 0)
			{
				k = i * (-1);
				_putchar('-');
				_putchar(48 + k);
			}
			else if (i <= (-10))
			{
				z = i * (-1);
				_putchar('-');
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			if (n < 100)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			{
				_putchar((i / 100) + 48);
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			if (i == 98)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
}
