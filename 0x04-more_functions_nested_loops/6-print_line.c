#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: number of lines to be used
  *
  * Return: ...
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(90);
		}

		_putchar('\n');
	}
}
