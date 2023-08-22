#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be upadted
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, j, k;
	char *a, x;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		a++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		x = s[i];
		s[i] = *a;
		*a = x;
		a--;
	}
}
