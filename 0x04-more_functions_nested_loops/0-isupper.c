#include "main.h"
/**
 * _isupper - checks whether upper or lower
 * @c: parameter of the function
 * Return: 1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
