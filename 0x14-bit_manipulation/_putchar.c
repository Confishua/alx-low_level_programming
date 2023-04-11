#include "main.h"
#include <unistd.h>

/**
* _putchar - outputs character c
* @c: the availabe character
*
Return: 1 on success
* On error: returns -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
