//
//  enum_check.c
//  StudyCX
//
//  Created by kook on 2022/08/14.
//

#include "enum_check.h"

enum days {MON, TUE, WED, THU, FRI, SAT, SUN};

void enum_check(void) {
    
    enum days day = SUN;
    
    switch(day) {
        case MON:
            printf("월요일");
            break;
        case TUE:
            printf("월요일 화요일");
            break;
        case WED:
            printf("월요일 수요일");
            break;
        case THU:
            printf("월요일 목요일");
            break;
        case FRI:
            printf("월요일 금요일");
            break;
        case SAT:
            printf("월요일 토요일");
            break;
        case SUN:
            printf("월요일 일요일");
            break;
    }
    printf("\n");
}
