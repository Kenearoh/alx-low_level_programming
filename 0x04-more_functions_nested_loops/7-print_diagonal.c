#include "main.h"
/**
 *print_diagonal - draws a diagonal line
 *@n: number of times the character \ is printed
 *Return: \ or \n
 */
void print_diagonal(int n)
{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (a = 0; a < i; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
