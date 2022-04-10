#include <stdio.h>
/**
 * main - prints two non-identcal digits
 * Return: Always (0) success
 **/
int main(void)
{
	int n;
	int n2;

	for (n = 48; n < 56; n++)
	{
		for (n2 = 49; n2 < 57; n2++)
		{
			if (n > n2)
			{
				putcar(n);
				putchar(n2);
			}
			purchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return(0);
}
