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

        *(s + i) = b;

        return (s);
}
