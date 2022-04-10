#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: always (0) success
 **/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		putchar(', ');
		n++;
	}
		return (0);
}
