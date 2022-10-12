#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns string length
 * @s: string s
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * _strcpy - string copy
 * @str1: string 1
 * @str2: string 2
 * Return: char
 */

char *_strcpy(char *str1, char *str2)
{
	int j, k;

	j = 0;

	while (str2[j] != '\0')
	{
		j++;
	}

	for (k = 0; k < j; k++)
		*(str1 + k) = *(str2 + k);
	str1[k] = '\0';

	return (str1);
}

/**
 * new_dog - new_dog info
 * @name : name kf dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
