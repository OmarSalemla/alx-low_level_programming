#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
	{
		putchar(',');
		putchar(' ');
	}
	else
	{
	putchar(i + '0');
	}
	}
	return (0);
}
