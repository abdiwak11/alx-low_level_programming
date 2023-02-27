#include "main.h"

/**
 * _strlen - a functin that prints the length of the string
 * @s: a given string
 * Return: the length 
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}
