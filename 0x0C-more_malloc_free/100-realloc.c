#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size:  allocated space for ptr
 * @new_size: the new size of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *moreNo;
	char *src, *dest;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	moreNo = malloc(new_size);

	if (moreNo == NULL)
	{
		return (NULL);
	}
	src = (char *)ptr;
	dest = (char *)moreNo;

	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = src[i];
	if (new_size < old_size)
		for (i = old_size; i < new_size - 1; i++)
			dest[i] = 0;
	free(ptr);
	return (moreNo);
}
