#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: pointer to the string
 * Return: String
 */

void _puts(char *str)
{
int l = 0;

while (str[l])
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
