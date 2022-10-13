#include <stdio.h>

/**
 * main - the program enters and exit through main.
 * Retrun: the program returns a zero value.
 */
int main(void)
{
	printf("The size of char:          %ldbytes.\n",(sizeof(char)));
	printf("The size of int:           %ldbytes.\n",(sizeof(int)));
	printf("The size of long int:      %ldbytes.\n",(sizeof(long int)));
	printf("The size of long long int: %ldbytes.\n",(sizeof(long long int)));
	return(0);
}
