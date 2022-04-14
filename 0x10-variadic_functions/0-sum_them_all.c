#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters.
* Return: 0 If n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int i;


	va_start(sum, n);

	for (i = n; i >= 0; i = va_arg (sum, int))
	{
		printf("%d\n", i);
	}
	va_end(sum);
}
