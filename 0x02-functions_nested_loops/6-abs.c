#include "main.h"
/**
 * _abs - print outs the absolute value of a given number
 *
 * Return: the abs of a given number
 */
int _abs(int i)
{
	if (i < 0)
	{
		int ab;
		ab = i * -1;
		return (ab);
	}
	else
		return (i);
}
