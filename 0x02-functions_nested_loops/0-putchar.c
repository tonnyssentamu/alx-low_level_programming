#include<unistd.h>
/**
 * main -  program that prints _putchar
 *
 * RETURN - Always 0
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
