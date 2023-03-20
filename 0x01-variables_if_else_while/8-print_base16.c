#include <stdio.h>
/**
 * main - Print all base 16 in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 48;
	int b = 97;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
