#ifndef SORTLIB_H
#define SORTLIB_H  1

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "error-sort.h"
#include "str_vector_t.h"

int sort_file  (/*@ in @*/  FILE *fpin, 
                /*@ in @*/  FILE *fpout,   
                /*@ in @*/ int   flag_r,
                /*@ in @*/ int   flag_s,
                /*@ in @*/ int   flag_c);
#endif
