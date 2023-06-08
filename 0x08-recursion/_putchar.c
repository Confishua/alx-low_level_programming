#include <unistd.h>

/**
* _putchar - writes character c to stdout
* @c: The character to print
* Return: 1 on sucess
* On error: returns -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
