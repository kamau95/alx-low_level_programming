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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
