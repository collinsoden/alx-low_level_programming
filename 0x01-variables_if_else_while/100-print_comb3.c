#include <stdio.h>
/**
 * main - prints two non-identcal digits
 * Return: Always (0) success
 **/
int main(void)
{
	int n, n2;

	for (n = 48; n <= 56; n++)
	{
		for (n2 = 49; n2 <= 57; n2++)
		{
			if (n2 > n)
			{
				putchar(n);
				putchar(n2);
		if (n != 56 || n2 != 57)
		{
			putchar(',');
			putchar(' ');
		}
			}
		}
	}
		putchar('\n');
		return (0);
}
