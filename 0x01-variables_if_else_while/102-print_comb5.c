#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i; i < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				for (l = k; k < 10; k++)
				{
					if (i == j && j == k && k == l)
					{
						continue;
					}
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + k);
					putchar(48 + l);
					if (i == 9 && j == 8 && k == 9 && l == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}


