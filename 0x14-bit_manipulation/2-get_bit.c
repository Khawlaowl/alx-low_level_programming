#include "main.h"

/**
 * get_bit - fnct that Returns the value of a bit
 * @n: integer to extract the bit from.
 * @index: The index of the bit to get
 *
 * Return: (0 or 1) or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;

	if (n & mask)
	{
		return (1);
	}
	return (0);
}
