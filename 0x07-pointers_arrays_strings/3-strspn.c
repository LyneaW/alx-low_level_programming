#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int l = 0;
int w;

while (*s)
{
for (w = 0; accept[w]; w++)
{
if (*s == accept[w])
{
l++;
break;
}
else if (accept[w + 1] == '\0')
return (l);
}
s++;
}
return (l);
}
