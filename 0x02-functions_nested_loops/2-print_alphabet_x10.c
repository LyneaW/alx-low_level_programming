#include "main.h"
/**
 * print_alphabet_x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int l;
int w;

for (l = 1; l <= 10; l++)
{
for (w = 97; w <= 122; w++)
{
_putchar(w);
}
}
_putchar('\n');
}
