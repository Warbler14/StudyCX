#include "printf_check.h"

#define PI 3.14

void printCheckout(void) {
    
    printf("To C, or not to C: that is the question.\n");

    printf("%%c를 사용한 결과 : %c\n", 'a');            // 문자
    printf("%%s를 사용한 결과 : %s\n", "즐거운 C언어");    // 문자열
     
    printf("%%f를 사용한 결과 : %f\n", PI);
    printf("%%f를 사용한 결과 : %f\n", 0.123456789);    // 소수점 6자리까지만 표현
     
    printf("%%o를 사용한 결과 : %o\n", 123);            // 8진 정수
    printf("%%x를 사용한 결과 : %x\n", 123);            // 16진 정수
     
    printf("%%g를 사용한 결과 : %g\n", 0.001234);       // 값에 따라 %f나 %e
    printf("%%g를 사용한 결과 : %g\n", 0.00001234);     // 값에 따라 %f나 %e
    printf("%%G를 사용한 결과 : %G\n", 0.000001234);    // 값에 따라 %f나 %E
}
