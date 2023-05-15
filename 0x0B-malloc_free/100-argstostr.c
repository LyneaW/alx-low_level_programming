#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0
 */

char *argstostr(int ac, char **av)
{
int ch = 0, m = 0, n = 0, o = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
while (m < ac)
{
while (av[m][n])
{
ch++;
n++;
}
n = 0;
m++;
}
s = malloc((sizeof(char) * ch) +ac + 1);

m = 0;
while (av[m])
{
while (av[m][n])
{
s[o] = av[m][n];
o++;
n++;
}
s[o] = '\n';
n = 0;
o++;
m++;
}
o++;
s[o] = '\0';
return (s);
}
