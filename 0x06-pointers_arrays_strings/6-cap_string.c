#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @l: string to be capitalised
 * Return: string pointer
 */
char *cap_string(char *l)
{
int index = 0;

while (l[index])
{
while (!(l[index] >= 'a' && l[index] <= 'z'))
index++;

if (l[index - 1] == ' ' ||
l[index - 1] == '\t' ||
l[index - 1] == '\n' ||
l[index - 1] == ',' ||
l[index - 1] == ';' ||
l[index - 1] == '.' ||
l[index - 1] == '!' ||
l[index - 1] == '?' ||
l[index - 1] == '"' ||
l[index - 1] == '(' ||
l[index - 1] == ')' ||
l[index - 1] == '{' ||
l[index - 1] == '}' ||
index == 0)
l[index] -= 32;
index++;
}
return (l);
}
