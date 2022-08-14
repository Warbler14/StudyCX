//
//  function_ check.h
//  StudyCX
//
//  Created by kook on 2022/07/23.
//

#ifndef function_check_h
#define function_check_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>

struct PersonInfo {
    int number;
    char *name;
    char description[30];
};

void function_check(void);

void by_value(int a, int b, int c);

void by_ref(int  *a, int *b, int*c);

void half(void *x, char type);

float getAverage(int param, ...);

int *larger(int *a, int *b);

void printStructInfo(struct PersonInfo *info);

#endif /* function_check_h */
