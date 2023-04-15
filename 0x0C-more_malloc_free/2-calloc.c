#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size in bytes
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	ptr = malloc(len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
