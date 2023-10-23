#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: The character to print
=======
 *  @c: The character to print
>>>>>>> 4013f1b626fe3f3ee2e07c9d74453df0f56c3cd1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
