//
//  string_copy_check.c
//  StudyCX
//
//  Created by kook on 2022/07/08.
//

#include "string_check.h"


void string_check(void) {
    
    size_t length;
    
    char * test = "abcd";
    
    length = strlen(test);
    
    printf("test length : %lu\n", length);
    
    printf("-------------strcpy---------------\n");
    
    char str1[20] = "hello! world.";
    char str2[20];
    char * des;
    
    des = strcpy(str2, str1);
    printf("str1 [%s] addr : %p\n", str1, str1);
    printf("str2 [%s] addr : %p\n", str2, str2);
    printf("des [%s]\n", des);
    
    char str3[20] = {0};
    des = strncpy(str3, str1, 5);
    printf("des [%s]\n", des);
    
    printf("----------------------------\n");
    
//    char *newStr;
//    newStr = ctrdup(str1);
//    printf("str1 [%s] addr : %p\n", str1, str1);
//    printf("str2 [%s] addr : %p\n", str2, str2);
    
    
    
    /*
    char buf[80];
    
    while(1) {
        fflush(stdin);
        
        puts("\nEnter a line of text; a blank line terminates.");
        fgets(buf, 80, stdin);
        
        length = strlen(buf);
        int compare = strcmp("\n", buf);
        if(compare != 0) {
            printf("\nThat line is %d characters long.", (int)length);
        } else {
            break;
        }
    }
    */
    
    printf("---------------atof-------------\n");
    
    char *strBuffer = "10";
    double testAtof = atof(strBuffer);
    printf("%f\n", testAtof);
    
    
    char *strBuffer2 = "3.14";
    testAtof = atof(strBuffer2);
    printf("%f\n", testAtof);
    
    
    
}
