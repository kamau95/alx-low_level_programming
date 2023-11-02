#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: integer to be assigned to that memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
unsigned int *p;

p = malloc(b);
if (p == NULL)
{
	exit(98);
}
	return (p);

}
