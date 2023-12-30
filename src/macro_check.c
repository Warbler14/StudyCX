//
//  macro_check.c
//  StudyCX
//
//  Created by kook on 2022/08/15.
//

#include "macro_check.h"

#define FUN1(x) x
#define FUN2(x) #x
#define ADD_PRINT(x, y) printf(#x "+" #y "=%d\n", x + y)
#define CONCAT(a, b) a##b

void macro_check(void) {
    
    printf("line number %d\n", __LINE__);
    printf("file name %s\n", __FILE__);
    printf("compile time %s\n", __TIME__);
    printf("compile date %s\n", __DATE__);
    
    printf("%d", FUN1(1));
    puts("");
    printf("%s", FUN2(12345ABC));
    puts("");
    ADD_PRINT(100, 99);
    printf("%d\n", CONCAT(3, 5));
    puts("");
    //printf("%d\n", CONCAT("Hello", "world"));
}
