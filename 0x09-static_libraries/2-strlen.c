#include "main.h"
/**
 * _strlen –fct returns the length of a string
 * @s: val string
 * Return: the  length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
