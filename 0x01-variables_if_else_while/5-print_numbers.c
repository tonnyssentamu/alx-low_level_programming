#include <stdio.h>

/**
  * prints all single digit numbers of base 10 starting from 0
  *
  * Return: Always (Success)
  */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
