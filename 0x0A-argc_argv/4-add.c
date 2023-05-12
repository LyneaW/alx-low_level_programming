#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int l;
unsigned int m, sum = 0;
char *p;

if (argc > 1)
{
for (l = 1; l < argc; l++)
{
p = argv[l];

for (m = 0; m < strlen(p); m++)
{
if (p[m] < 48 || p[m] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(p);
p++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}

return (0);
}
