#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * Return: concatenated string
 * @s1:string one
 * @s2: string two
 */

char *str_concat(char *s1, char *s2)
{
	char *str3;
	size_t len;

	len = strlen(s1) + strlen(s2) + 1;
	str3 = (char *)malloc(sizeof(char) * len);

if (str3 == NULL)
	return (NULL);

strcpy(str3, s1);
strcat(str3, s2);

	return (str3);
}
