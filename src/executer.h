//
//  executer.h
//  StudyCX
//
//  Created by kook on 2022/05/20.
//

#ifndef executer_h
#define executer_h

#include <stdio.h>

void executer(void (*fp)(void));

void selectFunction(void **fpa, int count);

#endif /* executer_h */
