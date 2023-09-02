#include <stdio.h>
#include "main.h"

/**
 * _putchar - fnct writes the character c to stdout
 * @c: char to print
 *
 * Return: success 1.
 * On error, -1 errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
