#include "main.h"
/**
 *print_square - prints a square
 *@#: the character to print the square
 *@size: size of the square
 *Return: Always 0
 */
void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
