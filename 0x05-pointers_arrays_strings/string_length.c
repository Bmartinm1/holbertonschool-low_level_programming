#include <stdio.h>

int string_length(char *pointer)
 33 {
 34         int c = 0;
 35
 36         while ( *(pointer + c) != '\0')
 37                 c++;
 38
 39         return (c);
 40 }
