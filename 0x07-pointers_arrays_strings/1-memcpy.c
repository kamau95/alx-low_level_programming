#include "main.h"
/**
 * _memcpy - function to copy n bytes
 * @dest: destination string
 * @src: string holding bytes to be copied
 * @n: number of bytes
 * Return: pointer to destination string
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
