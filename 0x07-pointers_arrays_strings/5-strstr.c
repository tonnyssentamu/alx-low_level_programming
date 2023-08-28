#include <stdlib.h>
#include "main.h"
/**
* _strstr - locates a substring
*
* @haystack: string to search
* @needle: substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int k = 0;

	while (needle[s] != '\0')
		k++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != k)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
