#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';

	while
	(c <= 'z')
	{
		putchar(c);

		c++;
	}

	putchar('\n');

	return (0);
}
