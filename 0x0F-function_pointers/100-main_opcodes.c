#include <stdio.h>

void print_opcodes(unsigned char* start, unsigned char* end) {
unsigned char* p = start;
 if (p < end)
   {
     p++; 
printf("%02x ", *p);
}
printf("\n");
}

int main() {
unsigned char* main_start = (unsigned char*)&main;
unsigned char* main_end = (unsigned char*)&print_opcodes;
print_opcodes(main_start, main_end);

return 0;
}
