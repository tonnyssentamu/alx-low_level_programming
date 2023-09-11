#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol, i;
	dog_t *doggy;

	nl = ol = 0;
	while (name[nl++])
		;
	while (owner[ol++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nl * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < nl; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(ol * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < ol; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
