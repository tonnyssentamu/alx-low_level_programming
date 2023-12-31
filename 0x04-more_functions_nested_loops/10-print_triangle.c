#include "main.h"

/**
  * print_triangle - prints a triangle, followed by a new line
  * @size: size of the squares triangle
  *
  * Return: ...
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}

			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
