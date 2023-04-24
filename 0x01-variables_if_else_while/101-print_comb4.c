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
int t;

for (l = 48; l < 58; l++)
{
for (w = 49; w < 58; w++)
{
for (t = 50; t < 58; t++)
{
if (t > w && w > l)
{
putchar(l);
putchar(w);
putchar(t);
if (l != 55 || w != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
