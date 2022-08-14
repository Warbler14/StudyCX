#include "printf_check.h"

#define PI 3.1415

void test(void) {
    printf("it's working\n");
}

void print_checkout(void) {
    
    printf("To C, or not to C: that is the question.\n");

    int val = 10;
    double pi = 3.1415;
    printf("size of int val %ld\n", sizeof val);
    printf("size of int %ld\n", sizeof(int));
    printf("size of double val %ld\n", sizeof pi);
    printf("size of double %ld\n", sizeof(double));
    
    printf("%%c를 사용한 결과 : %c\n", 'a');            // 문자
    printf("%%s를 사용한 결과 : %s\n", "즐거운 C언어");    // 문자열
    
    char *string = "string test";
    printf("%%s를 사용한 결과 : %s\n", string);         // 포인터
     
    printf("%%f를 사용한 결과 : %f\n", PI);
    printf("%%f를 사용한 결과 : %f\n", 0.123456789);    // 소수점 6자리까지만 표현
     
    printf("%%o를 사용한 결과 : %o\n", 123);            // 8진 정수
    printf("%%x를 사용한 결과 : %x\n", 123);            // 16진 정수
     
    printf("%%g를 사용한 결과 : %g\n", 0.001234);       // 값에 따라 %f나 %e
    printf("%%g를 사용한 결과 : %g\n", 0.00001234);     // 값에 따라 %f나 %e
    printf("%%G를 사용한 결과 : %G\n", 0.000001234);    // 값에 따라 %f나 %E
    
    printf("반지름이 1인 원의 넓이 : %f\n", PI * 1.0 * 1.0);
}
