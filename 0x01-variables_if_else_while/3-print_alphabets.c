#include <stdio.h>

/**
 * main - entry point
 *
 *Return: always 0(success)
 */
int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		putchar(m);
	for (m = 'A' ; m <= 'Z' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}














