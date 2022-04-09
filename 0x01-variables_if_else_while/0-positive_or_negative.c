#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- This will run the function to assign a number to the variable n
 * Each time the function is eexecuted
 * Return: This will return 0 if Success
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
