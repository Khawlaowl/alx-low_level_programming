#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: The number of parameters.
 * @...: Variable number of parameters.
 *
 * Return: If n == 0, return 0; otherwise, return the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    int sum = 0;

    va_start(ap, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(ap, int);
    }

    va_end(ap);

    return sum;
}
