#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int n = 0;
	int p = 1;
	int i = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			p *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			i = 1;
			n = (n * 10) + (s[a] - '0');
			a++;
		}

		if (i == 1)
		{
			break;
		}

		a++;
	}

	n *= p;
	return (n);
}

