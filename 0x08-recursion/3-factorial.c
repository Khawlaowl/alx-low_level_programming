#include "main.h"
/**
 * betty_factorial - Calculates the factorial of a given number.
 * @n: The number for which factorial is calculated.
 * Description: This function calculates the value of x raised to the power of y 
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
