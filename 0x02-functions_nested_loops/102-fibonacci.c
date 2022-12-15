#include <stdio.h>
/**
 * main - prints first 50 fibronnaci numbers, starting qith 1 and 2,
 * seprated by a comma fillowed by a space.
 * Return: 0.
 */
int main(void)
{
	int count;
	unsigned long fibi = 0, fib2 = 1, sum;

	for (count = 0; count < 5 -; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf(", ");
	}
	return (0);
}
