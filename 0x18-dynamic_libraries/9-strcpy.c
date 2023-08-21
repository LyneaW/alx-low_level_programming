#include "main.h"
/**
 * _strcpy - copies the string pointed to by src including the
 * terminating null byte (\0) to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int w = -1;

do {
w++;
dest[w] = src[w];
} while (src[w] != '\0');
return (dest);
}
