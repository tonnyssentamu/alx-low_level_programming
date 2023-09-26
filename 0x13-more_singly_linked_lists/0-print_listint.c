#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list
  * @h: linked list head
  *
  * Return: Lists linked number
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
