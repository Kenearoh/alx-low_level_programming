#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character
 * Return: a pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char*)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		array[i] = c;
	}
	return (array);
}
