#include <stdio.h>
#include "main.h>
/**
 * _putchar - writesthe character  c to stdout
 * @c: The character to print
 * Return: on success 1
 * On error, -1 is return and errno is set appropriately
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
