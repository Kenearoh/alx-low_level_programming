#include "main.h"
/**
 * _strstr - finds the first occurrence of substring needle in string haystack
 * @haystack: string to be searched
 * @needle: string to be found
 * Return:  pointer to located string, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && (haystack[i] == needle[i]); i++)
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			haystack++;
		}
		haystack++;
	}
	return ('\0');
}
