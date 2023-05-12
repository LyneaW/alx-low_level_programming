#include <stdio.h>
#include "main.h"
/**
* _strchr - a function that locates a character in a string
* @s: the string to locate the first occurence of c
* @c: the character to locate
* Return: returns a pointer to the first occurence of c
*/
char *_strchr(char *s, char c)
{
int t;

for (t = 0; 1 ; t++)
{
if (s[t] == c)
return ((s + t));
if (s[t] == 0)
break;
}
return (NULL);
}
