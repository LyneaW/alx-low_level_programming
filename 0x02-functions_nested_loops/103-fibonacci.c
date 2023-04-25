#include <stdio.h>
/**
 * main -  prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0;
long y = 1;
long z = 2;
long sum = z;

while (z + y < 4000000)
{
z += y;
if (z % 2 == 0)
sum += z;
y = z - y;
++z;
}
printf("%ld\n", sum);
return (0);
}
