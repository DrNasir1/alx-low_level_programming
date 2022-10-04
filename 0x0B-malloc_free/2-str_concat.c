#include "main.h"

/**
 * _strlen - string length
 * @s: string
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
 * _strcat - concat strigs
 * @st1: string 1
 * @st2: string 2
 * Return: string
 */

char *_strcat(char *st1, char *st2)
{
	int j, k;

	k = _strlen(st1);
	for (j = 0; st2[j] != '\0'; j++)
		st1[k + j] = *(st2 + j);
	st1[k + j] = '\0';
	return (st1);
}

/**
 * str_concat - str concat with malloc
 * @s1 : string 1
 * @s2: string 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	if (size == 0)
		return (NULL);
	res = (char *) malloc(sizeof(char) * size);
	if (res == 0)
		return (NULL);
	_strcat(res, s1);
	_strcat(res, s2);
	return (res);
}
