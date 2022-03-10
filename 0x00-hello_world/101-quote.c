#include <stdio.h>
#include <unstdio.h>

/**
 * main - prints exactly and that piece of art is useful
 * " - Dora Korpar, 2015-10-19
 * Return: (0) for successful execution
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

