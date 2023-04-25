#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 *@w: number to be printed
 *
 * Return: value of last digit
 */
int print_last_digit(int w)
{
int l;
l = w % 10;
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
