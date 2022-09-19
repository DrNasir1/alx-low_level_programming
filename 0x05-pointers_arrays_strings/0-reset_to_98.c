#include <stdio.h>
#include "main.h"
/*
 * main - check the code
 * @m - takes a pointer to int and updates the value to 98
 * Return: always return (0)
 */
void reset_to_98(int *n)
{
	int n;
	int *p;
	p =&n;
	n =402;
	printf("the value of n b4 is %d\n", n);
	*p =98;
	printf("the value of n after is %d\n", n);
	return(0);
}
