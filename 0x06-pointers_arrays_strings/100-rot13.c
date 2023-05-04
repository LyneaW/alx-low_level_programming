#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @l: string pointer
 * Return: pointer to l
 */

char *rot13(char *l)
{
int t;
int u;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (t = 0; l[t] != '\0'; t++)
{
for (u = 0; u < 52; u++)
{
if (l[t] == data1[u])
{
l[t] = datarot[u];
break;
}
}
}
return (l);
}
