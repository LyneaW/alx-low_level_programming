#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{

int l, w;
for (l = 1; l <= 10; l++)
{
for (w = 0; w <= 14; w++)
{
if (w >= 10)
_putchar('1');
_putchar(w % 10 + '0');
}
_putchar('\n');
}
}
