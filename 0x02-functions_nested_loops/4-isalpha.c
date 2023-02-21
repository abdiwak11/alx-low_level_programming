#include "main.h"
/**
 * int _isalpha - checks whether its alphabet or not
 *
 * Returns: 1 if c is aletter lowercase or upper
 *
 * @c: parameter thats checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

