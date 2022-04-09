#include <stdio.h>
/**
 * main - this will print all alphabets except q and e
 * Return: Always (0) Success
 **/
int main(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
	if (lett != 'e' && lett != 'q')
	{
		putchar(lett);
	}
		lett++;
	}
		putchar('\n');
		return (0);
}
