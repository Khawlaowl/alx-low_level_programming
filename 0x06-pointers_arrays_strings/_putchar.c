#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Description:
 * This function writes a single character to the standard output (stdout).
 *
 * Parameters:
 *   c - The character to be printed
 *
 * Return:
 *   On success, returns 1.
 *   On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

