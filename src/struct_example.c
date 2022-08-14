//
//  struct_example.c
//  StudyCX
//
//  Created by kook on 2022/05/29.
//

#include "struct_example.h"

void struct_test(void) {
    struct StructInfo d1 = {
        100, "defaultName", "0123456789"
    };
    
    print_struct(d1);
    print_struct_ptr(&d1);
}

void print_struct(struct StructInfo structInfo) {
    printf("%d, %s, %s\n", structInfo.number, structInfo.name, structInfo.str);
}

void print_struct_ptr(struct StructInfo *structInfoPtr) {
    printf("%d, %s, %s\n", structInfoPtr->number, structInfoPtr->name, structInfoPtr->str);
}
