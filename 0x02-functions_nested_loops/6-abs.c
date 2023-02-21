#include "main.h"
/**
 * _abs - print outs the absolute value of a given number
 *
 * Return: the abs of a given number
 */
int _abs(int x)
{
	int y, z;

	if (x > 0)
	{
		return (x);
	}
	else
	{
		y = x / x;
		z = x * y;
		return (z);
	}
}


