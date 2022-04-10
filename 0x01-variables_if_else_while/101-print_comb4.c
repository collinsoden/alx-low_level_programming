#include <stdio.h>
/**
 * main - this will print three different digits
 * Return: always (0) success
 **/
int main(void)
{
	int m, n, o;

	for (m = 48; m <= 58; m++)
	{
		for (n = 49; n <= 58; n++)
		{
			for (o = 50; o <= 58; o++)
			{
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
			putchar('\n');
			return (0);
}
