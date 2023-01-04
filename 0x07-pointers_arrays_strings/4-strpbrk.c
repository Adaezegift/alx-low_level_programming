#include "main.h"
/**
 * _strpbrk - function that searches a string of any set of bytes
 * @s: first occurence in the string
 * @accept: matches one of the bytes, or @NULL is no such byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{

	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if
				(*s == accept[i])

					return (s);
		}
		s++;
	}
	return (0);
}
