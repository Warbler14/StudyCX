//
//  executer.h
//  StudyCX
//
//  Created by kook on 2022/05/20.
//

#ifndef executer_h
#define executer_h

#include <stdio.h>

struct FunctionInfo {
    char *name;
    void *fp;
};

void execute(void (*fp)(void));

void select_function(void **fpa, int count);

void select_function_by_function_infos(struct FunctionInfo *fip, int count);

#endif /* executer_h */
