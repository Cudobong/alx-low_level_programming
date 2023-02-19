#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if the number is positive, negative or 0
 * return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("n is positive %d\n", n);
	}
	
	else if (n == 0)
        {
                printf("n is negative %d\n", n);
	}

	else 
        {
                printf("n is zero %d\n", n);

        return (0);
	}
}
