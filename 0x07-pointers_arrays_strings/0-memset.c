#include "main.h"
/**
 * _memset - my function
 * @b: value
 * @n: number of positions
 * @s: pointer to character
 * Return: pointer to a character
 */
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)

<<<<<<< HEAD
        *(s + i) = b;

        return (s);
=======
	*(s + i) = b;

	return (s);
>>>>>>> 4013f1b626fe3f3ee2e07c9d74453df0f56c3cd1
}
