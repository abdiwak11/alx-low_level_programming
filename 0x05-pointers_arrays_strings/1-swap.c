#include "main.h"

/**
 * swap_int - swap the given two numbers
 * @a: the frist swaped parameter
 * @b: the second parametr
 * Return: the swaped value
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}

