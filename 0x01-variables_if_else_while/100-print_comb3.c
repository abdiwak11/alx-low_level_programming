#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(48 + i);
			putchar(48 + j);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
