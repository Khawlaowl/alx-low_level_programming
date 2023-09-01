#include "main.h"
#include <stddef.h>

/**
 * _strchr – fct Entry point
 * @s: val input
 * @c: val input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
