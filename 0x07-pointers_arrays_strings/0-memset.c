#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: byte
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;

for (t = 0; t < n; t++)
s[t] = b;
return (s);
}
