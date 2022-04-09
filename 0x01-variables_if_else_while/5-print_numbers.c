#include <stdio.h>
/**
 * main - prints all single numbers base 10
 * Return: Always (0) Success
 **/
int main(void)
{
	int num = '0';

	while (num < '10')
	{
		printf(num);
		num++;
	}
	printf('\n');
	return (0);
}
