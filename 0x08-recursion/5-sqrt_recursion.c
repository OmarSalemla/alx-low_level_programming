#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - find natural square root.
 * @x: int.
 * @prev: square root.
 * Return: int.
 */

#include <math.h>

double _sqrt_recursion(double x, double prev)
{
	if (fabs(x - prev) < FLT_EPSILON * x)
	{
		return (x);
	}
	else
	{
		return (_sqrt_recursion(0.5 * (x + prev), x));
	}
}

int _sqrt_recursion(int x)
{
	if (x < 2)
	{
		return (x);
	}
	else
	{
		return (_sqrt_recursion(x, x));
	}
}
