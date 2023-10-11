#include <stdio.h>
#include <string.h>
/**
 *print_string - Prints a string character by character.
 *@str: The input string.
 *Return: void.
 */
void print_string(char str[])
{
for (int i = 0; i < strlen(str); i++)
{
	putchar(str[i]);
}
}
/**
 *main - entry point of the program.
 *This function prints a string using the print_string function.
 *Return: 0 on success.
 *print_string - prints a string character by character.
 */
int main(void)
{
char str[] = "_putchar";
print_string(str);
	return (0);
}
