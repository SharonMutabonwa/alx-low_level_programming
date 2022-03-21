#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: value to first value
* @b: value to secondvalue
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
