#include "main.h"
/**
 *set_string - sets the value of a pointer to a char
 * @s: string pointed to
 * @to: the char
 * Return: new value set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
