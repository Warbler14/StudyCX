//
//  print_characters.c
//  StudyCX
//
//  Created by kook on 2022/05/21.
//
#include "print_characters.h"

void printCaracters(void){
    
    const unsigned char START_CHARACTER = 33;
    const unsigned char END_CHARACTER = 95;
    
    unsigned char x;
    for(x = START_CHARACTER ; x <= END_CHARACTER ; x++ ) {
        printf("\nASCII code %d is character %c", x ,x);
    }
    printf("\n");
    
    char ch, *ptr, *p;
    
    ptr = malloc((END_CHARACTER - START_CHARACTER) * sizeof(char));
    if(ptr == NULL) {
        printf("allocate fail");
        return;
    }
    
    p = ptr;
    
    for(ch = START_CHARACTER; ch < END_CHARACTER + 1 ; ch++) {
        *p++ = ch;
    }
    
    *p = '\0';
    
    puts(ptr);
    
    free(ptr);
    
}
