#include "main.h"
/**
 * _isdigit - checks whether a digit ranges from 0 to 9
 * @c: is the digit to be checked
 * Return: returns 1 if within range and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
