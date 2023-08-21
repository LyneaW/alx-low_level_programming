#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the pointer to be converted
 *
 * Return: An integer
 */

int _atoi(char *s)
{
int w = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;
while (s[w])
{
if (s[w] == 45)
{
min *= -1;
}
while (s[w] >= 48 && s[w] <= 57)
{
isi = 1;
ni = (ni * 10) + (s[w] - '0');
w++;
}
if (isi == 1)
{
break;
}
w++;
}
ni *= min;
return (ni);
}
