#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string to searched
* @c: character to be found
* Return: c or Null
*/
char *_strchr(char *s, char c)
{
	int i;/* index*/

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
