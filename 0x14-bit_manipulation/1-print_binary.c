#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
int o, add = 0;
unsigned long int new;

for (o = 63; o >= 0; o--)
{
new = n >> o;

if (new & 1)
{
_putchar('1');
add++;
}
else if (add)
_putchar('0');
}
if (!add)
_putchar('0');
}
