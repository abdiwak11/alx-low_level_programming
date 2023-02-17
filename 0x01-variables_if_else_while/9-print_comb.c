#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
