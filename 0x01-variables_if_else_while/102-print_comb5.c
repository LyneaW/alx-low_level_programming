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

for (l = 0; l < 100; l++)
{
for (w = 0; w < 100; w++)
{
if (l < w)
{
putchar((l / 10) + 48);
putchar((l % 10) + 48);
putchar(' ');
putchar((w / 10) + 48);
putchar((w % 10) + 48);
if (l != 98 || w != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
