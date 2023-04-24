#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;
int w;

for (l = 48; l <= 56; l++)
{
for (w = 49; w <= 57; w++)
{
if (w > l)
{
putchar(l);
putchar(w);
if (l != 56 || w != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
g
