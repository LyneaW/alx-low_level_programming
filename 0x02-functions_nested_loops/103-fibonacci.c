#include <stdio.h>
/**
 * main -  prints the sum of the even-valued terms
 *
 * Return: empty
 */
int main(void)
{
int x = 0;
long y = 1; z = 2; sum = z;

while (z + y < 4000000)
{
z += y;
if (z % 2 == 0)
sum += z;
y = z - y;
++x;
}
printf("%ld\n", sum);
return (0);
}
