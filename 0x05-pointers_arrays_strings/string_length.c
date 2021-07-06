#include <stdio.h>

int string_length(char *pointer)
 {
          int c = 0;
 
          while ( *(pointer + c) != '\0')
                  c++;
	  
          return (c);
  }
