#include "main.h"

/**
* _strdup - a function to a new string
* @str: the new string
* Return: NULL
*/

char *_strdup(char *str)
{
char *newStr;
 
str = malloc(sizeof(newStr));

if (str == NULL)
{
return (NULL);
}
 while (*str != '\0');
 return (str);
}
