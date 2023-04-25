#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * @m: the number to be inputed
 *
 * Return: Last digit
 */
int print_last_digit(int m)
{
int l;

l = m % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
