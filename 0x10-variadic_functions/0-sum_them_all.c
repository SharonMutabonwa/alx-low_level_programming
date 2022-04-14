#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: number of arguments passed to the function
* Return: 0 If n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int sum;


	va_start(sum, n);

	for (i = n; i < n; i++)
	{
		sum += va_arg(sum, int))
	}
	va_end(sum);
	return (sum);
}
