#include "main.h"
/**
 *_strlen - prints the length of a string
 *@s: string to be printed
 *Return: length of string
 */
int _strlen(char *s)
{
	int i; /*i = string length*/

	while (s[i])
	{
		i++;
	}
	return (i);
}
