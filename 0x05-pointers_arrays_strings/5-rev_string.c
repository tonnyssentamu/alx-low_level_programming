#incluide "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int j, c, k;
	char *a, x;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (j = 0; j < (c / 2); j++)
	{
		x = s[j];
		s[j] = *a;
		*a = x;
		a--;
	}
}
