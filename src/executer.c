//
//  executer.c
//  StudyCX
//
//  Created by kook on 2022/05/20.
//
#include "executer.h"

void executer(void (*fp)(void)){
    fp();
}

void selectFunction(void **fpa, int count){
    /*
    for(int i = 0 ; i < count; i++ ) {
        if(fpa[i] != NULL) {
            printf("%s\n", fpa[i]);
        }
    }
    */
    
    int functionNumber;
    void (*fp) = NULL;
    
    printf("input function number 0~%d: ", count-1);
    scanf("%d", &functionNumber);
    
    if(functionNumber < count) {
        fp = fpa[functionNumber];
    } else {
        printf("funciton not found\n");
    }
    
    if(fp != NULL) {
        executer(fp);
    }
}
