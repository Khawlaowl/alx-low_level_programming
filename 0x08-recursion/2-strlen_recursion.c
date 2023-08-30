#include "main.h"

/**
 *  _strlen_recursion - Returns the length of a string.

 * @s: The str
 * ing to be evaluated
 * Description: This function calculates the factorial of the given number using recursion.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
