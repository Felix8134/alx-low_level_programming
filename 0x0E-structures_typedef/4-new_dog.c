#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - fnct
 * @s: ..
 * Return: null
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
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
	int a = 0;
	int b;

	while (src[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
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
	int x;
	int y;

	x = _strlen(name);
	y = _strlen(owner);

	z = malloc(sizeof(dog_t));
	if (z == NULL)
		return (NULL);
	z->name = malloc(sizeof(char) * (x + 1));
	if (z->name == NULL)
	{
		free(z);
		return (NULL);
	}
	z->owner = malloc(sizeof(char) * (y + 1));
	if (z->owner == NULL)
	{
		free(z);
		free(z->name);
		return (NULL);
	}

	_strcopy(z->name, name);
	_strcopy(z->owner, owner);
	z->age = age;
	return (z);
}
