#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
int m, n, o;

m = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (m < size)
{
n = size - m < 10 ? size - m : 10;
printf("%08x: ", o);
for (o = 0; o < 10; o++)
{
if (o < n)
printf("%02x", *(b + m + o));
else
printf("  ");
if (o % 2)
{
printf(" ");
}
}
for (o = 0; o < n; o++)
{
int c = *(b + m + o);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
m += 10;
}
}
