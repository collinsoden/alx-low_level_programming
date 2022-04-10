#include <stdio.h>
/**
 * main - prints all letters of the alphabet in reverse
 * Return: Always (0) success
 **/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
		putchar('\n');
		return (0);
}
