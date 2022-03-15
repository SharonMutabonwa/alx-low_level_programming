#include "main.h"

/**
* print_alphabet - check the code for ALX School students. 
* Description: prints the alphabets with _putchar
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
	i++;
}
