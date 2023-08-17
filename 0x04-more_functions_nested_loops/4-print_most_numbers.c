#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: ...
*/
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
		}
	_putchar(n);
	}

	_putchar('10');
}
