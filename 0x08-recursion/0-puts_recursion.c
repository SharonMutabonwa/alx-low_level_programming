#include "main.h"
/**
* _puts_recursion - prints a string, followed by a new line.
* @s: string to print
* Return: 0 always
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
}
