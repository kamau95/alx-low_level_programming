#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - gives pointer to a copy of input string
 * @str: string to be duplicated
 * Return: duplicated str if successful
 */
char *_strdup(char *str)
{
	size_t len;
	char *my_string;

if (str == NULL)
	return (NULL);

len = strlen(str);

my_string = (char *)malloc(sizeof(char) * (len + 1));
if (my_string == NULL)
	return (NULL);

strcpy(my_string, str);
	return (my_string);

}
