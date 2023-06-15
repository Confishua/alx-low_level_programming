#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination memory
 * @src: source memory
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int cp;
for (cp = 0; cp < n && src[cp] != '\0'; cp++)
dest[cp] = src[cp];
for (; cp < n; cp++)
dest[cp] = '\0';
return (dest);
}
