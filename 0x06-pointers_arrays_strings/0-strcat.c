#include "main.h"
/**
 * _strcat - appends two strings together
 * Return: character.
 * @dest: first string
 * @src: second string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
