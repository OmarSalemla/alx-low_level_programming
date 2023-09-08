#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: Always 0 (success)
*/

#include <stdio.h>

int main(void)
{
	int i, j;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		}
	}

	return (0);
}

