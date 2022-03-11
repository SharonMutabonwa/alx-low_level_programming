#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 always (successful)
 */


int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}


