//
//  file_check.c
//  StudyCX
//
//  Created by kook on 2022/06/06.
//

#include "file_check.h"


void float_number_export_file(void) {
    FILE *fp;
    float data[5];
    char filename[20];
    char filepath[40] = "/Users/kook/Desktop/";
    
    puts("Enter 5 floating point number.");
    
    for(int idx = 0 ; idx < 5 ; idx++) {
        scanf("%f", &data[idx]);
    }
    
    clear_stdin();
    
    puts("Enter a name for the file in Desktop");
    fgets(filename, 20, stdin);
    deleteEnter(filename);
    printf("filename length : %d\n", (int)strlen(filename));

    strcat(filepath, filename);
    printf("filepath length : %d\n", (int)strlen(filepath));
    printf("File path : %s\n", filepath);
    
    if((fp = fopen(filepath, "w")) == NULL) {
        fprintf(stderr, "Error opening file %s.", filepath);
        exit(1);
    }
    
    for(int idx = 0 ; idx < 5 ; idx++) {
        fprintf(fp, "\n%f", data[idx]);
    }
    
    fclose(fp);
    
}

void write_read_file(void) {
    int size = 20;
    int array1[size], array2[size];
    char *filepath = "/Users/kook/Desktop/direct.txt";
    FILE *fp;
    
    for(int idx = 0 ; idx < size ; idx++) {
        array1[idx] = 2 * idx;
    }
    
    if((fp = fopen(filepath, "wb")) == NULL) {
        fprintf(stderr, "Error opening file.");
        exit(1);
    }
    
    if(fwrite(array1, sizeof(int), size, fp) != size) {
        fprintf(stderr, "Error writing to file.");
        exit(1);
    }
    
    fclose(fp);
    
    if((fp = fopen(filepath, "rb")) == NULL) {
        fprintf(stderr, "Error opening file.");
        exit(1);
    }
    
    if(fread(array2, sizeof(int), size, fp) != size) {
        fprintf(stderr, "Error reading file.");
        exit(1);
    }
    
    fclose(fp);
    
    for(int idx = 0 ; idx < size ; idx++ ) {
        printf("%d\t%d\n", array1[idx], array2[idx]);
    }
    
    remove(filepath);
    
}

void clear_stdin(void) {
    char junk[100];
    fgets(junk, 100, stdin);
}

char *deleteEnter(char *str) {
    *(str + strlen(str) - 1) = '\0';
    return str;
}
