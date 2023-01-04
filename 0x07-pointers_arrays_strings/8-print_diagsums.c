#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, (1 = 0, r = 0);

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", 1, r);
}
