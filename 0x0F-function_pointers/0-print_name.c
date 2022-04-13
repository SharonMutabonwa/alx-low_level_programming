#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - prints a name
* @name: name pf a person
* @f: pointer to the printing function
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
