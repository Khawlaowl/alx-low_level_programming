#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - fnct that returns the sum of all its parmtrs
 * @n: the number of prmts
 * @...: vrbl nmbrs of prtmrs
 * Return: if n==0 _0
 *      otherwise - the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
