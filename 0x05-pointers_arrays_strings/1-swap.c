#include "main.h"

/**
 *swap_int - swap the value of int a and int b
 *@a - first parameter/int
 *@b - second parameter/int
 *return(void)
 */
void swap_int(int *a, int *b)
{
	int s;
		s = *a;
		*a = *b;
		*b = s;
}
