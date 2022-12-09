#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by Onyitech
* Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int %lu byte(s)\n", (unsigned long)size(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

