#include <stdio.h>
#include <unistd.h>

/**
 * main- This will print the message 'and that piece of art is useful'
 * - Dora Korpar, 2005-10-19'
 *   followed by a new line, to the standard error
 * Return: This will return 0 in this case
**/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
