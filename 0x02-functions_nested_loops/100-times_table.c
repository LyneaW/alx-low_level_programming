#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 *
 * @n: number of times table
 */
void print_times_table(int n)
{
int l, w, t;

if (n >= 0 && n <= 15)
{
for (l = 0; l <= n; l++)
{
_putchar('0');
for (w = 1; w <= n; w++)
{
_putchar(',');
_putchar(' ');
t = l * w;
if (t <= 99)
_putchar(' ');
if (t <= 9)
_putchar(' ');
if (t >= 100)
{
_putchar((t / 100) + '0');
_putchar(((t / 10) % 10) + '0');
}
else if (t <= 99 && t >= 10)
{
_putchar((t / 10) + '0');
}
_putchar((t % 10) + '0');
}
_putchar('\n');
}
}
}
