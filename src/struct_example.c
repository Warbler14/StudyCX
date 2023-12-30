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
    
    struct StructInfo sample = getSampleStructInfo();
    print_struct(sample);
    print_struct_ptr(&sample);
    
    struct Person man1 = {"Sponge Bob", "8300111-1111111"};
    struct Person man2 = {"Patrick Star", "8300111-1111112"};
    man1.frnd = &man2;
    man2.frnd = &man1;
    
    printf("%s %s\n", man1.name, man1.pId);
    printf("%s %s\n", man1.frnd->name, man1.frnd->pId);
    
    Data d = {10, 20};
    printf("%d %d\n", d.data1, d.data2);
}

struct StructInfo getSampleStructInfo(void) {
    struct StructInfo sample = {
        1000, "sampleName", "0123456789"
    };
    
    return sample;
}

void print_struct(struct StructInfo structInfo) {
    printf("%d, %s, %s\n", structInfo.number, structInfo.name, structInfo.str);
}

void print_struct_ptr(struct StructInfo *structInfoPtr) {
    printf("%d, %s, %s\n", structInfoPtr->number, structInfoPtr->name, structInfoPtr->str);
}
