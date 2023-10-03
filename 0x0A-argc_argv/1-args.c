#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0-success, non-zero-fail
 */

int main(int argc, char **argv)
{
	int num_args = argc - 1;

	printf("%d\n", num_args);
	return (0);
}
