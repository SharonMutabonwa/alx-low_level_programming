#include <stdio.h>
#include "main.h"
/**
*main - prints the alphabet, in lowercase, followed by a new line.
*
*Return: 0 always (Succes)
*/

void print_alphabet(void)
{
	char ch;
	
	ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
