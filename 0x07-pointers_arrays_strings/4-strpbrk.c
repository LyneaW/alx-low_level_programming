#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
int u, v;

for (u = 0; s[u] != '\0'; u++)
{
for (v = 0; accept[v] != '\0'; v++)
{
if (s[u] == accept[v])
return (s + u);
}
}
return (NULL);
}
