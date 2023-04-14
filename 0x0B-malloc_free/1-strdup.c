#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *dupli;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	dupli = malloc(sizeof(char) * (i + 1));
	if (dupli == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		dupli[n] = str[n];
	}
	return (dupli);
}
