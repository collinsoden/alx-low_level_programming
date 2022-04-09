#include <stdio.h>
/**
 * main - this will print alphabets from a to z in lowercase
 * Return: Always (0) Success
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
