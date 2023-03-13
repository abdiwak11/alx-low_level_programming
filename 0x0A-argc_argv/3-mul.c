#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc > 3)
	{
		printf("error\n");
		return (1)
	}
	else
	{
		x = int atoi(argv[1]);
		y = int atoi(argv[2]);

		printf("%d\n", (x * y);
	}
	return (0);
}
