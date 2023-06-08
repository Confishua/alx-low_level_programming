#include "main.h"

/**
* _putchar - writes the character to stdout
* @c : The character to be displayed
* Return: Always 0 for success
*/

int _putchar(char c)
{
return(write(1, &c, 1));
}
