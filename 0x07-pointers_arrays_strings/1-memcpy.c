#include "main.h"
/**
 * _memcpy - function to copy n bytes
 * @dest: destination string
 * @src: string holding bytes to be copied
 * @n: number of bytes
 * Return: pointer to destination string
 *
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
{
	*(cdest + i) = *(csrc + i);

}
	return (dest);
}
