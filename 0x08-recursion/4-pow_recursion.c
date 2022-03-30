#include "main.h"
/**
* _pow_recursion - eturns the value of x raised to the power of y
* @x: value to raise to the power of y
* @y: power to raise @x
* Return: -1 iy y is lower than 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
