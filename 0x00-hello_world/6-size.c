#include <stdio.h>
/**
 * main - Entry
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (usigned long) sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}

