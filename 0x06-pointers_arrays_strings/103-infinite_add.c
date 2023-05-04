#include "main.h"
/**
 * rev_string - reverse
 * @n: integer
 * Return: Always 0
 */
void rev_string(char *n)
{
int l = 0;
int w = 0;
char temp;

while (*(n + l) != '\0')
{
l++;
}
l--;
for (w = 0; w < l; w++, l--)
{
temp = *(n + w);
*(n + w) = *(n + l);
*(n + l) = temp;
}
}

/**
 * infinite_add - adds two numbers
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: buffer pointer
 * @size_r: buffer size
 * Return: calling function pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, l = 0, w = 0, digits = 0;
int val1 = 0, val2 = 0, temp_tot = 0;

while (*(n1 + l) != '\0')
l++;
while (*(n2 + w) != '\0')
w++;
l--;
w--;
if (w >= size_r || l >= size_r)
return (0);
while (w >= 0 || l >= 0 || overflow == 1)
{
if (l < 0)
val1 = 0;
else
val1 = *(n1 + l) -'0';
if (w < 0)
val2 = 0;
else
val2 = *(n2 + w) -'0';
temp_tot = val1 + val2 + overflow;
if (temp_tot >= 10)
overflow = 1;
else
overflow = 0;
if (digits >= (size_r - 1))
return (0);
*(r + digits) = (temp_tot % 10) + '0';
digits++;
w--;
l--;
}
if (digits == size_r)
return (0);
*(r + digits) = '\0';
rev_string(r);
return (r);
}
