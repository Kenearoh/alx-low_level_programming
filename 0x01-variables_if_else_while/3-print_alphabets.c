#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b = 97;
	int c = 65;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
