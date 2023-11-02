#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number of inputs
 * @size: bytes occupied by each input
 * Return: pointer to array if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int i;

arr = malloc(nmemb * size);
if (nmemb == 0 || size == 0)
	return (NULL);
if (arr == NULL)
	return (NULL);
for (i = 0; i < (nmemb * size); i++)
{
	*((char *)(arr) + i) = 0;
}
	return (arr);

}
