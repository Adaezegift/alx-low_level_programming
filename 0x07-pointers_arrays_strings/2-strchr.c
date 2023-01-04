#include "main.h"
/**
 * *_strchr -  a function that locates a character in a string.
 * @c: first occurence of character
 * @s: in the string
 * Return: if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else

			return (s);
	}
	if (c != 0)
		return (s);

	return (NULL);
}
