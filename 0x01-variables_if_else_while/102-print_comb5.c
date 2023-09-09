#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints
 *		all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (success)
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)
			{
				if (i < 10)
				{
					putchar('0');
					putchar(i + '0');
				}
				else
				{
					putchar(i / 10 + '0');
					putchar(i % 10 + '0');
				}

				putchar(' ');

				if (j < 10)
				{
					putchar('0');
					putchar(j + '0');
				}
				else
				{
					putchar(j / 10 + '0');
					putchar(j % 10 + '0');
				}

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
