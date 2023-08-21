#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An int to swap
  * @b: The other integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
