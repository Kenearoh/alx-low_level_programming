#include <stdarg.h>
#include "var_func.h"
#include <stdio.h>

/**
  * sum_them_all - sums all parameters
  * @n: number of parameter passed to function
  * @...: variable number of parameters to sum
  * Return: 0, else sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list s;

	va_start(s, n);
	int i = 0;
	sum = 0;
	
	while (i < n)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += var_arg(s, int);
		i++;
	}
	va_end(s);
	return (sum);
}
