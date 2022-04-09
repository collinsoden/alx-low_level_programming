#include <stdio.h>
/**
 * main - this will print all alphabets except q and e
 * Return: Always (0) Success
 **/
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
	while (lett != 'q' && lett != 'e')
	{
		putchar(lett);
	}
	}
		putchar('\n');
		return (0);
}
