#include <stdio.h>
/**
 * main - Print all lowercase alphabets in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 122;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
