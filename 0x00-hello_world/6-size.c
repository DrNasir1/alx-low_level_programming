#include <stdio.h>

/**
 * main - the program enters and exit through main.
 * Return: the program returns a zero value.
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (sizeof(char)));
	printf("Size of an int: %ld byte(s)\n", (sizeof(int)));
	printf("Size of long int: %ld byte(s)\n", (sizeof(long int)));
	printf("Size of long long int: %ld byte(s)\n", (sizeof(long long int)));
	printf("Size of float: %ld byte(s)\n", (sizeof(float)));
	return(0);
}
