#include "main.h"
/**
*_memcpy - a function that copies memory area
*@dest: memory n is stored
*@src: memory n is copied from
*@n: number of bytes
*
*Return: copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

