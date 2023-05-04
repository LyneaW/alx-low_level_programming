#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @k: string pointer
 * Return: pointer to k
 */

char *cap_string(char *k)
{
int string_count;

/* scan through string */
string_count = 0;
while (k[string_count] != '\0')
{/* if next character after count is a char, capitalise it */
if (k[0] >= 97 && k[0] <= 122)
{
k[0] = k[0] - 32;
}
if (k[string_count] == ' ' || k[string_count] == '\t' || k[string_count] == '\n' || k[string_count] == ',' || k[string_count] == ';' || k[string_count] == '.' || k[string_count] == '.' || k[string_count] == '!' || k[string_count] == '?' || k[string_count] == '"' || k[string_count] == '(' || k[string_count] == ')' || k[string_count] == '{' || k[string_count] == '}')
{
if (k[string_count + 1] >= 97 && k[string_count + 1] <= 122)
{
k[string_count + 1] = k[string_count + 1] - 32;
}
}
string_count++;
}
return (k);
}
