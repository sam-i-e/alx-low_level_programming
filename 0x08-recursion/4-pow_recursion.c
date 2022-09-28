#include "main.h"
/**
 * _pow_rrecursion - Calculate the value of x raised to the power of y
 * @x: number to raise
 * @y: power of the number
 * Return: the value of the number raised to the power,
 * if it is lower than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
