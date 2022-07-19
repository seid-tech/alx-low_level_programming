#include <stdio.h>

/**
 * main - computes and prints the sum of
 * all the multiples
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum1, sum2, sum3;
	int i;

	sum1 = 0;
	sum2 = 0;
	sum3 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum1 = sum1 + i;
		} else if ((i % 5) == 0)
		{
			sum2 = sum2 + i;
		}
	}
	sum3 = sum1 + sum2;
	printf("%lu\n", sum3);
	return (0);
}
