#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * Return: n always (successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of\n", n "is" n);
	if (n > 5)
		printf("%d and is greater than 5");
	else if (n == 0)
		printf("%d and is 0");
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0");
	return (n);
}
