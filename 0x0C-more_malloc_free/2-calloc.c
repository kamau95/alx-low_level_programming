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

arr = malloc(nmemb * size);
if (nmemb == 0 || size == 0)
	return (NULL);
if (arr == NULL)
	return (NULL);
memset(arr, 0, nmemb * size);
	return (arr);

}
