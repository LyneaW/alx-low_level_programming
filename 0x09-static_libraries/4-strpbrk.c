#include "main.h"
#include <stdio.h>
/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: the string to be searched
* @accept: the string with the pattern to be matched
* Return: retirns a pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{

int l, w;

for (l = 0; s[l] != 0; l++)
{
for (w = 0; accept[w] != 0; w++)
{
if (s[l] == accept[w])
{
return ((s + l));
}
}
}
return (NULL);
}
