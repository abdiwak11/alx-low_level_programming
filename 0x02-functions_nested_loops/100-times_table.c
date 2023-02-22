#include <stdio.h>
/**
 * print_times_table - the function that prints 9 times
 * @n: parameter of the function
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
			if (j == 0)
			{
				printf("%d, ", x);
			}
			else
				printf(" %d", x);

			if (j == n)
				continue;

			printf(", ");
			}
		}
	}
}
