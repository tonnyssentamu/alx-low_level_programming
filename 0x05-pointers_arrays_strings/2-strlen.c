#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to obtain its length
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int b = 0;

	for (; *s != '\0'; s++)
	{
		b++;
	}

	return (b);
}
