#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char d;
	float a;
	long int b;
	long long int e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
