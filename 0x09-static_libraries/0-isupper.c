#include "main.h"

/**
 * _isupper -  function to uppercase letters
 * @c: cheker char 
 *
 * Return: 0(success) or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
