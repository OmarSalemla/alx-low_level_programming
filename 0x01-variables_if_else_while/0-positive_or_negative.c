#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: positive or negative
 *
 * Return; 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("int is positive\n, n");
	else if (n == 0)
		printf("int is zero\n, n");
	else
		printf("int is negative\n, n");
	return (0);
}
