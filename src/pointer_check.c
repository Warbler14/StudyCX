//
//  pointer_check.c
//  StudyCX
//
//  Created by kook on 2022/06/05.
//

#include "pointer_check.h"

void pointer_checkout(void){
    srand((unsigned int)time(NULL));
    
    char *months[MONTH_LENGTH] = {
        "january", "february", "march", "april", "may", "june",
        "july", "august", "september", "october", "november", "december"
    };
    
    for(int idx = 0 ; idx < MONTH_LENGTH; idx++) {
        printf("%2d : %s\n", idx + 1 , months[idx]);
    }
    
    char  **ptr1 = &(*months);
    char  **ptr2 = &(*months);
    
    ptr1 += get_random_month_number();
    ptr2 += get_random_month_number();
    
    printf("%s\n", *ptr1);
    printf("%s\n", *ptr2);
    printf("distance %2ld\n", ptr2 - ptr1);
    
    print_strings(months, MONTH_LENGTH);
}

void print_strings(char *p[], int count){
    
    for(int idx = 0 ; idx < count; idx++) {
        printf("%d : %s\n", idx + 1, p[idx]);
    }
}

int get_random_month_number(void){
    int number = (int)(rand() % MONTH_LENGTH);
    printf("random_month_number : %d\n", number);
    
    return number;
}
