#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: The number for which factorial is calculated.
 * Description: This function calculates the x raised to the power of y 
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
