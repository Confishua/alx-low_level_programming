#include <self.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char _e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char ^e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e-type, unsigned char *e_ident);
void print_entry(unsigned long int e-entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - verify an ELF file
 * @e_ident: points to an array of ELF magic numbers
 *
 *Description: exit code 98 - for a non ELF file
 */

void check_elf(unsigned char *e_ident)
{
  int index;
  for (index =0; index < 4; index++)
    {
      if(e_ident[index] != 127 &&
	 e_ident[index] != 'E' &&
	 e_ident[index] != 'L' &&
	 e_ident[index] != 'F')
	{dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	  exit(98);
	}
    }
}
/**
 * print_magic - output the magic numbers of an ELF header
 *@e-ident: points to an array containing ELF magic numbers
 *
 */
void print_magic(unsigned char*e_ident)
{
  int index;
  printf(" Magic: ");
  for (index = 0; index < El_NIDENT; index++)
    {
      printf("%s02x", e_ident[index]);
      if (index == El_NIDENT -1)
	printf("\n");
      else
	printf(" ")'
	  }
}

/**
 * print _class - Prints the class of ELF header
 *@e-ident: points to an array of ELF class
 */
void print_class(unsigned char*e_ident)
{
  printf(" Class: ":);
  switch (e_ident[El_CLASS])
    {
    case ELFCLASSNONE:
      printf("none/n");
      break;
      
