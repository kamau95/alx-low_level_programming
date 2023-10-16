#include "main.h"

/**
 * _strcpy - copy string to an array
 * @dest: 1st argument char type pointer
 * @src: 2nd argument char type pointer
 *
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
