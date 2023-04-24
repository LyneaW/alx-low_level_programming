#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l = 97;
int w = 65;

while (l <= 122)
{
putchar(l);
l++;
}
while (w <= 90)
{
putchar(w);
w++;
}
putchar('\n');
return (0);
}
