#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
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
