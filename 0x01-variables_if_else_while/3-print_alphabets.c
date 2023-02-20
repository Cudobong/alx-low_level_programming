#include <stdio.h>

/**
 * main - print bothe upper and lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	char A;

	c = 'a';

	A = 'A';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}

	while (A <= 'Z')
	{
	putchar(A);
	A++;
	}

	putchar('\n');

	return (0);
}
