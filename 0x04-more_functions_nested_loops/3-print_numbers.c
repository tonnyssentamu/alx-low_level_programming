#include "main.h"
/**
*print_numbers - function that print all numbers from 0 to 9
*
*Return: ..
*/
void print_numbers(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		_putchar(num);
	}

	_putchar("\n");
}
