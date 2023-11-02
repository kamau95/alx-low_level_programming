#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates strings
 * @s1: string one
 * @s2: string two
 * @n: string size
 * Return: resulting string if succcessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *s3;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
	n = len2;
s3 = malloc(len1 + n + 1);
if (s3 == NULL)
	return (NULL);
strcpy(s3, s1);
strncat(s3, s2, n);
s3[len1 + n] = '\0';
	return (s3);
}
