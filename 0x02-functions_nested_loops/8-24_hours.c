#include "main.h"
/**
 * jack_bauer - the function that prints the minute
 *
 * Return: the minute
 */
void jack_bauer(void)
{
	int i, x, j, y;

	for (i = 0; i < 3; i++)
	{
		for (x = 0; x < 4; x++)
		{
			for (j = 0; j < 6; j++)
			{
				for (y = 0; y < 10; y++)
				{
					_putchar(i);
					_putchar(x);
					_putchar(':')
					_putchar(j);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
