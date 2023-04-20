#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * sum_them_all - sums all parameters
  * @n: number of parameter passed to function
  * @...: variable number of parameters to sum
  * Return: 0, else sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list s;

	va_start(s, n);

	while (i < n)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(s, unsigned int);
		i++;
	}
	va_end(s);
	return (sum);
}
