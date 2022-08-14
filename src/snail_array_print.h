//
//  snail_array_print.h
//  StudyCX
//
//  Created by kook on 2022/08/14.
//

#ifndef snail_array_print_h
#define snail_array_print_h

#include <stdio.h>
#include <stdlib.h>

void snail_array_print(void);

int **create_array(int height, int width);

void destroy_array(int ** array, int height);

void fill_array(int colSize, int rowSize, int **array, int number, int offset);

#endif /* snail_array_print_h */
