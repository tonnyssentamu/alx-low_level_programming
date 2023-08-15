#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char d;
	int i = 0;

	while (i <= 9)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}

		i++;

		_putchar('\n');
	}
}
