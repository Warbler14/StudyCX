//
//  array_pointer_check.c
//  StudyCX
//
//  Created by kook on 2022/06/05.
//

#include "array_pointer_check.h"


void array_pointer_checkout(void){
    
    int multi[2][4] = {{1,2,3,4}, {5,6,7,8}};
    
    printf("multi address : %p\n", multi);

    printf("multi[0] address : %p\n", multi[0]);
    printf("multi[1] address : %p\n", multi[1]);
    
    printf("multi[0][0] address : %p\n", &multi[0][0]);
    printf("multi[1][0] address : %p\n", &multi[1][0]);
    
    printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n");
    
    printf("size of multi : %ld\n", sizeof(multi));
    printf("size of multi[0] : %ld\n", sizeof(multi[0]));
    printf("size of multi[0][0] : %ld\n", sizeof(multi[0][0]));
    
    printf("-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n");
    
    int (*ptr)[4] = multi;
    for(int count = 0 ; count < 2 ; count++) {
        print_array(ptr++);
    }
}

void print_array(int (*ptr)[4]) {
    int *p = (int *)ptr;
    
    for(int count = 0 ; count < 4 ; count++) {
        printf("%d\t", *p++);
    }
    printf("\n");
}
