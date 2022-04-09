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
		printf(n, "is positive\n");
	} else if (n == 0)
	{
		printf(n, "is zero\n");
	} else if (n < 0)
	{
		printf(n, "is negative\n");
	}
	return (0);
}
