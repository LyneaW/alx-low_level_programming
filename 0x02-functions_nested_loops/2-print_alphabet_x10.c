#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char l;
int w;
w = 0;
while (w < 10)
{
for (l = 97; l <= 122; l++)
{
_putchar(l);
}
_putchar('\n');
w++;
}
}
