#include "main.h"
/**
 * betty_puts_recursion - Prints a string to the standard output
 * @s: The string to be printed.
 * void _puts_recursion(char *s)
 *
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
