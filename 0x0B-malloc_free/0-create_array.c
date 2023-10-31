#include <stdlib.h>
#include  "main.h"
/**
 * create_array - function that creates an array
 * @c:character to be initialized in the arrays
 * @size: the size of the array to be created
 * Return:returns pointer to an array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

if (size == 0)
	return (NULL);

arr = (char *) malloc(size * sizeof(char));

if (arr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
{
*(arr + i) = c;

}
return (arr);
}

