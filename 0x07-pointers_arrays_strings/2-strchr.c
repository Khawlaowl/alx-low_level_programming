#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Return: Pointer  c in the string s,
 * or NULL if the character is not found
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
