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
		if (i == 9)
		{
			continue;
		}
		putchar(48 + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
