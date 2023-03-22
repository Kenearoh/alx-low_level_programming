#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to param
 * @n: The number to be treated
 *
 * Return: Number matrix
 */
void print_times_table(int n)
{
<<<<<<< HEAD
int i, j, k;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;
if (j == 0)
{
_putchar(k + '0');
}
else if (k < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else if (k >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
=======
	int x, y, z;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
>>>>>>> 4c295352ca37b1b7ec1dcdb39ec2bdbc83e08aaa
}
