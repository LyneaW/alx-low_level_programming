#include "main.h"
/**
 * leet - encodes a string into 1337
 * @w: string pointer
 * Return: pointer to w
 */

char *leet(char *w)
{
int string_length, leetCount;
char leetLetters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";

/* scan through string */
string_length = 0;
while (w[string_length] != '\0')
/* check whether leetLetter is found */
{
leetCount = 0;
while (leetCount < 10)
{
if (leetLetters[leetCount] == w[string_length])
{
w[string_length] = leetNums[leetCount];
}
leetCount++;
}
string_length++;
}
return (w);
}
