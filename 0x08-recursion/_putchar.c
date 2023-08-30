#include "main.h"
#include <unistd.h>
/**
 * betty_putchar - Writes a character to the standard output.
 * @c: The character to be displayed.
 *
 * Description: This function writes the specified character to the standard output.
 * Return: On success, it returns 1. On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
