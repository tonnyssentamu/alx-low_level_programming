#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10 starting from 0
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
