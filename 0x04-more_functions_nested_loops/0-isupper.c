#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	c = 65;

	if (c == 65 && c <= 90)
	{
		return (c);
	}
	else
	{
		return (1);
	}
}
