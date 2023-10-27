#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * return: (0) if successful
 * @argc: numbers of things
 * @argv:array of strings
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
