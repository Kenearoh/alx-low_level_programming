#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *_putchar twice in your code
 * Return: from 0 to 9, except 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
