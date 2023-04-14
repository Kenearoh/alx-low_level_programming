#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *ptr = NULL;
	int k = 0;
	int extension = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			extension++;
		}
	}

	ptr = (char *)malloc(extension + ac + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
