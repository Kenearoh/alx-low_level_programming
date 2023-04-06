#include "main.h"
int check_prime_number(int n, int x);

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	return (check_prime_number(n, 1));
}

/**
 * check_prime_number - calculates if an integer is a prime number recursively
 * @n: number to evaluate
 * @x: iterator
 * Return: 1 if n is a prime number, 0 if not
 */
int check_prime_number(int n, int x)
{
	if (n <= 1)
	{
		return (0);  /* 1 is not a prime number*/
	}
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (check_prime_number(n, x + 1));
}
