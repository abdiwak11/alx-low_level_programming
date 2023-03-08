#include "main.h"

/**
 * factorial - function that calculate a factorial
 * @n: a given number
 * Return: a factorial of a given num
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
