#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * malloc_checked - checks  allocated memory using malloc
 * @b: character
 * Return: a pointer to allocated memory, or value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
