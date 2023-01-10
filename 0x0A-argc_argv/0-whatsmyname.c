#include <stdio.h>
/**
 * Main - prints the name of the program
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
