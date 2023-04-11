 #include "main.h"
/**
 *_strcat - concatenates two strings
 *@src: source string
 *@dest: destination string
 *Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int s = 0;
	int d = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
