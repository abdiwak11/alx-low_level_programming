#include <stdio.h>
/**
 * main - the entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
