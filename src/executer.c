//
//  executer.c
//  StudyCX
//
//  Created by kook on 2022/05/20.
//
#include "executer.h"

const char *END_MESSAGE = "- end of line -";

void execute(void (*fp)(void)){
    fp();
}

void select_function(void **fpa, int count){
    
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
        execute(fp);
    }
    
    printf("%s\n", END_MESSAGE);
}

void select_function_by_function_infos(struct FunctionInfo *fip, int count) {
    
    printf("------- functions ------\n");
    for(int idx = 0; idx < count ; idx++) {
        struct FunctionInfo functionInfo = fip[idx];
        printf("%3d - %s\n", idx, functionInfo.name);
    }
    printf("-------------------------\n");
    
    int functionNumber = count - 1;
    void (*fp) = NULL;
    
    printf("input function number 0~%d: ", count-1);
    scanf("%d", &functionNumber);
    
    if(functionNumber < count) {
        struct FunctionInfo functionInfo = fip[functionNumber];
        fp = functionInfo.fp;
    } else {
        printf("funciton not found\n");
    }
    
    if(fp != NULL) {
        execute(fp);
    }
    
    printf("%s\n", END_MESSAGE);
}
