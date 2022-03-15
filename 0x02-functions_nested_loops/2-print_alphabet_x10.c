#include "main.h"

/**
*print_alphabet_x10 - check the code for ALX School students.
* Description: Prints the alphabets with _putchar
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
