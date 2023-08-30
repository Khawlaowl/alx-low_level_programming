#include "main.h"
/**
 * betty_puts_recursion - Prints a string to the standard output using recursion.
 * @s: The string to be printed.
 *
 * Description: This function recursively prints the specified string to the standard output.
 * Return: Always 0 (Success).
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
