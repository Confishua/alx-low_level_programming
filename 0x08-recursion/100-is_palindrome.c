#include "main.h"

/**
* is_palindrome - a function to print and empty string
*@s: String of words for evaluation
*Return: 1 on success, 0 on error
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
int length = strlen(s);
int i = 0, j = length - 1;
if (i < j)
{
i++;
j--;
}
{
if (s[i] != s[j])
{
return (0);
}
}
return (1);
}
