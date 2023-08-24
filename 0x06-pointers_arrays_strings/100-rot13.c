#include "main.h"

/**
 * rot13 - lfunction that encodes a string using rot13.
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *s)
{
	int i;
	char storeh[] = "ABCDEFGHIJKLM";
	char storel[] = "abcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				storel[s[i] - 97] : storeh[s[i] - 65];
		}
	}
	return (s);
}
