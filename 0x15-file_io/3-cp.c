#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);


/**
* create_buffeer - allocation of buffer size of 1024 bytes
* @file: file name to store char
*Return: A pointer to the newly-allocated buffer
*/
char *create_buffer(char *file)
{
  char *buffer;
  buffer = malloc(sizeof(char) * 1024);
  if (buffer == NULL)
    {
      dprinf(STDERR_FILENO,
	     "Error: can't write to %s/n", file);
      exit(99);
    }
  return (buffer);
}

/**
 * close_file - Closes the file descriptors
 *@fd: file descriptor for closure
 */

void_close_file(int fd)
{
  int c;
  c = close(fd);
  
  if(c== -1)
    {
      dprintf(STDERR_FILENO, "Error: can't close fd fd %d\n", fd);
exit(100);
    }
}
/**
 * main - Copies the contents of one file to another
@argc: The number of arguments count
@argv: An array of the arguments pointers
Return: 0 on success
*
*Description: exit code 97 - for incorrect argument
* exit code 98 - when file_from does not exist
* exit code 99 - when file_to can neither be created nor written to
*exit code 100 when file_to nor file_from cannot be closed
*/
int main( int argc, char * argv[])
  int from, to, r, w;
char *buffer;

if(argc !=3)
  {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
  }
buffer = creat_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do
{
  if(from == -1 || == -1)
    {
      dprintf(STDERR_FILENO,
	      "Error: Can't read from file %s\n", argv[1]);
      free(buffer);
      exit(98);
    }

  w = write(to, buffer, r);
  if(to == -1 || w == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv{2});
      free (buffer);
      exit(99);
    }
  r = read(from, buffer, 1024);
  to = open(argv[2], O_WRONLY | O_APPEND);
 }while (r > 0);

free(buffer);
close_file(from);
close_file(to);

return(0);

}
