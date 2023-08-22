#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: the string
  *
  * Return: void
  */
void rev_string(char *s)
{
	char rev = s[0];
	int reverse = 0;
	int i;

	while (s[reverse] != '\0')
		reverse++

	for (i = 0; i < reverse; i++)
	{
		reverse--;
			rev = s[i];
			s[i] = s[reverse];
			s[reverse] = rev
	}
}
