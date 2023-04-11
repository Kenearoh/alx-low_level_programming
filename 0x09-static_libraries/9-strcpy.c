#include "main.h"
/**
 **_strcpy -  copies the string pointed to by src
 *@src: source string
 *@dest: destination string
 *Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	int s = -1; /* means not the last in the string or not the null*/

	do {
		s++;
		dest[s] = src[s];
	} while (src[s] != '\0');
	return (dest);
}
