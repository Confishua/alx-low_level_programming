#include "main.h"

/**
 * append_text_to_file - This appends text to a file
 *@filename: points to the file's name
 *@text_content: the string appended to the file
 *
 *Return: --1 if the filename is NULL or function failure
 *--1, no permission for user for an nonexisting file
 *otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
  int o, w, len = 0
    if(filename == NULL)
      return (-1);
  if(text_content !=NULL)
    {
      for(len = 0; text_content[len];)
	len++;
    }
  o = open(filename, O_WRONLY | O_APPEND);
  w = write(o, text_content, len);

  if(o == -1 || w == -1)
    return(-1);

  close(o);
  return(1);
}
