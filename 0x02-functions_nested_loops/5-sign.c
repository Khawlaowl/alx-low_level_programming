#include <unistd.h> /* Include this header for the write function.*/

#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return 1;
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0;
    }
    else
    {
        _putchar('-');
        return -1;
    }
}

/* This is just a placeholder for the _putchar function. Make sure it's correctly implemented. */
int _putchar(char c)
{
    /* Your implementation of _putchar goes here */
    return write(1, &c, 1);
}


