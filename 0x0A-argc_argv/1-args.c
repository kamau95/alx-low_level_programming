#include <stdio.h>
/**
 * main - entry point.
 * return: (0) if successful
 * @argc: numbers of things
 * @argv:array of strings
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
