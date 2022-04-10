#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: always (0) success
 **/
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
		n++;
	}
		putchar('\n');
		return (0);
}
