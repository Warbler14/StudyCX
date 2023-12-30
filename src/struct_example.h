//
//  struct_example.h
//  StudyCX
//
//  Created by kook on 2022/05/29.
//

#ifndef struct_example_h
#define struct_example_h

#include <stdio.h>

struct StructInfo {
    int number;
    char *name;
    char str[10];
};

struct Person {
    char name[20];
    char pId[20];
    struct Person* frnd;
};

typedef struct IntData {
    int data1;
    int data2;
} Data;

void struct_test(void);

struct StructInfo getSampleStructInfo(void);

void print_struct(struct StructInfo structInfo);

void print_struct_ptr(struct StructInfo *structInfoPtr);

#endif /* struct_example_h */
