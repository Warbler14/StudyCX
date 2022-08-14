//
//  file_check.h
//  StudyCX
//
//  Created by kook on 2022/06/06.
//

#ifndef file_check_h
#define file_check_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 fopen fprintf fscanf fclose
 fflush flushall
 getc fgetc fgets fread
 putc       fputs fwrite
 ftell rewind fseek
 feof remove tmpnam
 */

void float_number_export_file(void);

void write_read_file(void);

void clear_stdin(void);

char *deleteEnter(char *str);

#endif /* file_check_h */
