#include "main.h"
/**
 * _strchr - function to check for char
 * @s: pointer to a char
 * @c: character in contention
 * Return: null if character is not found
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
	return (s);

}
	s++;

}
	return (NULL);
}
