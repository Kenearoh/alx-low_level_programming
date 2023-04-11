#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched for 1st occurrence
 * @accept: reference string
 * Return: pointer to byte in s, matching bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i; /*index*/

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
