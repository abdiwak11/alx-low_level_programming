#include "main.h"
/**
 * _islower - checks whether its lowercase alphabet or not
 *
 * Return: Always 0 success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
