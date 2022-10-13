#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string lengrh
 * @s: parameter string
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
 * string_nconcat - string concat with condition n
 * @s1 : string 1
 * @s2 : strinv 2
 * @n: byte
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int size;
	unsigned int m, l, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = _strlen(s2);
	if (n >= k)
		n = k;
	size = (_strlen(s1) + n + 1);
	res = malloc(size * sizeof(char));

	l = _strlen(s1);
	if (res == NULL)
		return (0);
	for (m = 0; m < l; m++)
	{
		res[m] = s1[m];
	}
	for (; m < (n + l); m++)
	{
		res[m] = s2[m - l];
	}

	res[m] = '\0';
	return (res);
}
