int add(int a, int b);

/**
 * add - adds two integers and returns the result
 * @a: int to be added to b
 * @b: int to be added to a
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}

int mul(int a, int b);

/**
 * mul - multiplies two integers
 * @a: int to be multiplied to b
 * @b: int to be multiplied to a
 * Return: the result of the operation
 */
int mul(int a, int b)
{
	int c;

	c = a * b;

	return (c);
}

int sub(int a, int b);

/**
 * sub - subtracts two integers
 * @a: int to subtract b from
 * @b: int to subtract from a
 * Return: the result of the operation
 */
int sub(int a, int b)
{
	int c;

	c = a - b;

	return (c);
}

int div(int a, int b);

/**
 * div - divides two integers
 * @a: int to be divided by b
 * @b: int to divide a
 * Return: the result of the operation
 */
int div(int a, int b)
{
	int c;

	c = a / b;

	return (c);
}

int mod(int a, int b);

/**
 * mod - finds the modulus of two integers
 * @a: int number
 * @b: module of
 * Return: the result of the operation
 */
int mod(int a, int b)
{
	int c;

	c = a % b;

	return (c);
}
