 #include "main.h"

/**
 * _pow_recursion - function that calculate a power of x , y
 * @x: frist para
 * @y: second para
 * Return: power of a given number
 */

int _pow_recursion(int x, int y)
{
	int c = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y-1)));
	}
}
