#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: inputed variable
 * Return: void
 */

void print_diagonal(int n)
{
int l, w;

if (n <= 0)
_putchar('\n');
for (l = 0; l < n; l++)
{
for (w = 0; w < l; w++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
