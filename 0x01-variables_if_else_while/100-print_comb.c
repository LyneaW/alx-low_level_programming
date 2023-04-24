#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l = 0;
int w = 0;

while (l <= 9)
{
while (j <= 9)
{
if (!(l > w) || l == w)
{

putchar(l);
putchar(w);
if (l == 8 && w == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
w++;
}
w = 0;
l++;
}
return (0);
}
