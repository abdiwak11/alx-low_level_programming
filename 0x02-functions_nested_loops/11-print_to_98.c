#include <stdio.h>
/**
 * print_to_98 - prints
 *
 * @n: number where it starts
 * Return: prints those number
 */
void print_to_98(int n)
{
	int x;

	if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d\n", x);
				continue;
			}
			printf("%d, ", x);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d\n", x);
				continue;
			}
			printf("%d, ", x);
		}
		printf("\n);
	}
}
