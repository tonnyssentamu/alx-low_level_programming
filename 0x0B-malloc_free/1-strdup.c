#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Returns a pointer to a new string which is a duplicate of the string str
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int b = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (b < i)
	{
		s[b] = str[b];
		b++;
	}

	s[b] = '\0';
	return (s);
}
