#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: empty
 */
int main(void)
{
int x = 0;
long y = 1, z = 2;

while (x < 50)
{
if ( x == 0)
printf("%ld", y);
else if (x == 1)
printf(", %ld", z);
else
{
z += y;
y = z - y;
printf(", ld", z);
}
++x;
}
printf("\n");
return (0);
}
