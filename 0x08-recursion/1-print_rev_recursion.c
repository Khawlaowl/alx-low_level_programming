#include "main.h"

/**
 * betty_print_rev_recursion - Displays a string in reverse
 * @s: The string to be reversed and printed
 *
 * Description: This function takes a string
 * as input and prints it in reverse
 * order using recursion.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
