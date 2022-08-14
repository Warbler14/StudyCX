//
//  function_check.c
//  StudyCX
//
//  Created by kook on 2022/07/23.
//

#include "function_check.h"

void function_check(void) {
    
    int x = 2;
    int y = 4;
    int z = 6;
    
    printf("\nBefore calling by_value(), x = %d, y = %d, z = %d", x, y, z);
    
    by_value(x, y, z);
    
    printf("\nAfter calling by_value(), x = %d, y = %d, z = %d", x, y, z);
    
    by_ref(&x, &y, &z);
    
    printf("\nAfter calling by_ref(), x = %d, y = %d, z = %d", x, y, z);
    
    int i = 20;
    long l = 100000;
    float f = 12.3456;
    double d = 123.9876;
    
    printf("\n%d, %ld, %f, %lf", i, l, f, d);
    
    half(&i, 'i');
    half(&l, 'l');
    half(&f, 'f');
    half(&d, 'd');
    
    printf("\n%d, %ld, %f, %lf", i, l, f, d);
    
    /*
        변칙적인 인수를 받아들이는 데 필요한 것들은 STDARG.H 에 정의되어 있다.
        va_list : 포인터의 데이터형
        va_start() : 인수의 목록을 초기화하는 데 사용되는 매크로
        va_arg() : 변수 목록에서 차례대로 각각의 인수를 읽어들이는 데 사용되는 매크로
        va_end() : 모든 인수를 받아들이고 나서 '정리' 동작을 수행하는 데 사용되는 매크로
     */
    
    float average;
    average = getAverage(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    printf("\nAverage : %f", average);
    
    int a = 10;
    int b = 20;
    int *largeValue = larger(&a, &b);
    
    printf("\nlarger value is %d", *largeValue);
    
    struct PersonInfo personInfo;
    personInfo.number = 0;
    personInfo.name = "tester";
    strcpy(personInfo.description, "test message");
    
    printStructInfo(&personInfo);
    
    printf("\n");
}

void by_value(int a, int b, int c) {
    a = 0;
    b  = 0;
    c = 0;
}

void by_ref(int *a, int *b, int *c) {
    *a = 0;
    *b  = 0;
    *c = 0;
}

void half(void *x, char type) {
    switch(type) {
        case 'i' :
            *((int *)x) /= 2;
            break;
        case 'l' :
            *((long *)x) /= 2;
            break;
        case 'f' :
            *((float *)x) /= 2;
            break;
        case 'd' :
            *((double *)x) /= 2;
    }
}

float getAverage(int param, ...) {
    va_list arg_ptr;
    int count, total = 0;
    
    va_start(arg_ptr, param);
    
    for (count = 0; count < param; count++) {
        total += va_arg(arg_ptr, int);
    }
    
    va_end(arg_ptr);
    
    return ((float) total / param);
    
}

int *larger(int *a, int *b) {
    if(*a > *b)
        return a;
    
    return b;
}

void printStructInfo(struct PersonInfo *info) {
    printf("\nnumber : %d", info->number);
    printf("\nname : %s", info->name);
    printf("\ndescription : %s", info->description);
}
