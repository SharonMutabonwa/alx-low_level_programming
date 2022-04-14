#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of arguments passed to the function
* Return: 0 If n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = n; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
