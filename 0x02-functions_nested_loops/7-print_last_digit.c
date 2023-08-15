#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @c: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int c)
{
	int lastdig;

	lastdig = c % 10;

	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}

	_putchar(lastdig + '0');

	return (lastdig);
}
