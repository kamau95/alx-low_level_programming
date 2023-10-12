#include "main.h"
/**
 *print_most_numbers - prints most no from 0-9
 *
 */
void print_most_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
if (digit == '2' || digit == '4')
{
	continue;

}
_putchar(digit);

}
_putchar('\n');

}
