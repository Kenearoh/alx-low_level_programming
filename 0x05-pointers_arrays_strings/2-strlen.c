#include "main.h"
/**
 *_strlen - prints the length of a string
 *@s: string to be printed
 *Return: length of string
 */
int _strlen(char *s)
{
	int index;
	
	for (index = 0; s[index] != '\0'; index++);
	return (index);
}
