#include "main.h"
/**
* print_alphabet_x10 -  ten times the alphabet
*/
void print_alphabet_x10(void)
{
char letter;
int j;
j = 0;
while (j < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
j++;
}
}
