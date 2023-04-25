#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;
int w = 0;

while (l < 1024)
{
if ((l % 3 == 0) || (l % 5 == 0))
{
w += l;
}
l++;
}
printf("%d\n", w);
return (0);
}
