#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	for (b -= 1; b >= 0; b--)
	{
		putchar(s[b]);
	}

	putchar('\n');
}
