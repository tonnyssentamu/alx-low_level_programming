#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0.
 */
int main(void)
{
	int password[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = (2772 - sum - '0');
			break;
		}
	}
	return (0);
}
