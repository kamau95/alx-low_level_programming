#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calculates the total
 * @n: number of variables
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;

va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);

}
	return (sum);

}

