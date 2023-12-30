//
//  io_check.c
//  StudyCX
//
//  Created by kook on 2022/08/14.
//

#include "io_check.h"

#include <string.h>

void test01(void) {
    printf("-------------------\n");
    printf("fputs fgets\n");
    printf("-------------------\n");
    fputs("input text : ", stdout);
    
    fflush(stdin);
    
    char string_buffer[50];
    fgets(string_buffer, sizeof(string_buffer), stdin);
    
    fflush(stdin);
    
    printf("string_buffer : %s, size : %ld\n", string_buffer, strlen(string_buffer));
}

void test02(void) {
    printf("-------------------\n");
    printf("getchar putchar puts fputs\n");
    printf("-------------------\n");
    char ch = 0;
    
    printf("char : ");
    ch = getchar();
    putchar(ch);
    
    //gets(string_buffer);    //warning: this program uses gets(), which is unsafe.
    //puts(string_buffer);
    
    puts("\n");
    
    puts("puts print");
    fputs("fpust print\n", stdout);
}

void test03(void) {
    printf("-------------------\n");
    printf("strcpy strncpy\n");
    printf("-------------------\n");
    
    char str1[20] = "Original-String";
    char str2[20];
    
    strcpy(str2, str1);
    
    printf("%s = %s\n", str1, str2);
    
    char str3[5];
    
    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1] = '\0';
    printf("%s = %s\n", str1, str3);
}

void test04(void) {
    printf("-------------------\n");
    printf("strcat\n");
    printf("-------------------\n");
    
    char str1[30] = "Your favorite language is ";
    char str2[10];
    
    fputs("What is your favorite computer language ? :", stdout);
    
    fflush(stdin);
    fgets(str2, sizeof(str2), stdin);
    
    //strcat(str1, str2); // EXC_BAD_INSTRUCTION (code=EXC_I386_INVOP, subcode=0x0)
    
    
    printf("%s\n", str1);
}

void test05(void) {
    char * str2 = "Hello World";
    
    char str1[20];
    long i;
    long len = strlen(str2);
    
    for(i = 1; i < len; i++) {
        strcpy(str1, "");
        strncat(str1, str2, i);
        puts(str1);
    }
}

//void test06x(void) {
//    char* str1 = "ABC";
//    char* str2 = "ABC";
//
//    int result = srtcmp(str1, str2);
//    if(result > 0) {
//        puts("srt1 > str2");
//
//    }
//}

void io_check(void) {

    //test04();
    test05();
}
