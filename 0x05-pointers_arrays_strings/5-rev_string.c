#include "main.h"

/**
 * rev_string - reverse string
 * @s : parameter s
 * Return: returns void
 */

void rev_string(char *s)
{
	int i, j;
	char first;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		first = s[j];
		s[j] = first;
	}
}
