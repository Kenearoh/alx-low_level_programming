#include "main.h"
/**
 *_strncat - concatenates two strings using at most n bytes
 *@n: number of bytes used from src
 *@src: source string with n or more bytes
 *@dest: resulting string
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s = 0;
	int d = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
