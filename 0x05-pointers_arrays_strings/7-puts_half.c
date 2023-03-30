#include "main.h"
/**
  * puts_half -  prints half of a string
  * @str: string printed
  * Return: Always 0
  */
void puts_half(char *str)
{
	int l = 0;
	int half_l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 1 || l % 2 == 0)/* half_length = l / 2 */
	{
		half_l++;
	}
	while (half_l < l)
	{
		_putchar(str[half_l]);
		half_l++;
	}
	_putchar('\n');
}
