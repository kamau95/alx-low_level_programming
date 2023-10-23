#include "main.h"

/**
 * _puts - my  function
 * @str: char type argument
 *
 * Description: print a string follow by a new line
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
