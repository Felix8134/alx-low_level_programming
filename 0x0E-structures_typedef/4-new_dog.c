#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - fnct
 * @c: ..
 * Return: null
 */

int _strlen(char *c)
{
	int x = 0;

	while (*c)
		x++;
	return (x);
}
/**
 * _strcopy - str
 * @dest: ..
 * @src: ..
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{
	int y = 0;

	for (y = 0; src[y]; y++)
		dest[y] = src[y];
	dest[y] = '\0';
	return (dest);
}

/**
 * new_dog - str
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *z;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	z = malloc(sizeof(dog_t));
	if (z->name == NULL)
		return (NULL);
	z->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (z->name == NULL)
	{
		free(z);
		return (NULL);
	}
	z->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (z->owner == NULL)
	{
		free(z->name);
		free(z);
		return (NULL);
	}
	z->name = _strcopy(z->name, name);
	z->age = age;
	z->owner = _strcopy(z->owner, owner);
	return (z);

}
