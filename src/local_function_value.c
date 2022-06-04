//
//  local_function_value.c
//  StudyCX
//
//  Created by kook on 2022/05/29.
//

#include "local_function_value.h"

void local_function_start(void){
    for(int idx = 0 ; idx < 10 ; idx++ ) {
        execute_static_function();
    }
}

void execute_static_function(void){
    static int count;
    printf("count : %d\n", count++);
}

void register_variable_time_check(void) {
    
    clock_t start, end;
    
    printf("test start register variable\n");   //12732112.000000.2
    start = clock();
    {
        register int i, j;
        for (i = 0; i < 1000000; i++)
        {
            for (j = 0; j < 10000; j++)
            {
            }
        }
    }
    end = clock();
    
    printf("%f.2\n", (float)(end - start));
    
    printf("test start auto variable\n");   //12740068.000000.2
    
    start = clock();
    {
        auto int i, j;
        for (i = 0; i < 1000000; i++)
        {
            for (j = 0; j < 10000; j++)
            {
            }
        }
    }
    end = clock();
    
    printf("%f.2\n", (float)(end - start));
    
    printf("test start normal variable\n");   //12739887.000000.2
    
    start = clock();
    {
        int i, j;
        for (i = 0; i < 1000000; i++)
        {
            for (j = 0; j < 10000; j++)
            {
            }
        }
    }
    end = clock();
    
    printf("%f.2\n", (float)(end - start));
}
