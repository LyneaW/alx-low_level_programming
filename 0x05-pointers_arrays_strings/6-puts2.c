#include "main.h"
/**
 * puts2 - prints every other character of a string starting with
 * the first character followed by a new line
 * @str: used reference string
 * Return: Always 0
 */

void puts2(char *str)
{
int w = 0;

while (str[w] != '\0')
{
if (w % 2 == 0)
{
_putchar(str[w]);
}
w++;
}
_putchar('\n');
}
