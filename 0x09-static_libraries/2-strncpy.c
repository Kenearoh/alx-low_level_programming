#include "main.h"
/**
 *_strncpy - copies a string
 *@src: source string
 *@dest: destination string
 *@n: number of characters to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (s < n && src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}
	return (dest);
}
