#include "main.h"
/**
*print_alphabet.
*Description: Prints the alphabet with _putchar
*Return: Always 0.
*/

void print_alphabet(void)
{
	char c;
	
	for (int c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
