#include <stdio.h>
#include <math.h>

/**
  * main - prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long n, max;
	long x = 612852475143;
	double sq = sqrt(x);

	for (n = 1; n <= sq; n++)
	{
		if (number % n == 0)
		{
			max = x / n;
		}
	}

	printf("%ld\n", max);

	return (0);
}
