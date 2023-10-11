#include "main.h"
/**
* print_last_digit - gives the last digit of a number
* @i: the int used to get the number
* Return: the last digit
*/
int print_last_digit(int i)
{
int p;
if (i < 0)
i = -i;
n = i % 10;
if (p < 0)
p = -p;
_putchar(p + '0');
return (p);
}
