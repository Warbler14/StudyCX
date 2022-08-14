//
//  snail_array_print.c
//  StudyCX
//
//  Created by kook on 2022/08/14.
//

#include "snail_array_print.h"

void snail_array_print_by_size(int height, int width);

void snail_array_print(void) {
    snail_array_print_by_size(3, 3);
    printf("\n");
    snail_array_print_by_size(5, 5);
    printf("\n");
    snail_array_print_by_size(10, 5);
    printf("\n");
    snail_array_print_by_size(5, 10);
}

void snail_array_print_by_size(int height, int width) {
    int **array = create_array(height, width);

    fill_array(height, width, array, 1, 0);
    
    for(int idy = 0 ; idy < height ; idy++ ) {
        for(int idx = 0 ; idx < width ; idx++ ) {
            printf("%3d ", *(*(array + idy) + idx) );
        }
        printf("\n");
    }
    
    destroy_array(array, height);
}

int **create_array(int height, int width) {
    int **array = (int **) malloc ( sizeof(int *) * height);
    if(array == NULL) {
        return NULL;
    }
   
    for(int i=0 ; i < height ; i++) {
        array[i] = (int*) malloc (sizeof(int) * width);
    }
    
    for(int idy = 0 ; idy < height ; idy++ ) {
        for(int idx = 0 ; idx < width ; idx++ ) {
            *(*(array + idy) + idx) = 0;
        }
    }
    
    return array;
}

void destroy_array(int ** array, int height) {
    for(int i=0 ; i < height ; i++) {
        free(array[i]);
    }
    free(array);
}

void fill_array(int colSize, int rowSize, int **array, int number, int offset) {
    
    int x = offset, y = offset;
    
    for(int idx = 0 ; idx < rowSize ; idx++, x++) {
        *(*(array + y) + x) = number++;
    }
    
    if(colSize == 1) {
        return;
    }
    
    x = offset + rowSize - 1;
    
    for(int idx = 0 ; idx < colSize - 1 ; idx++) {
        y++;
        *(*(array + y) + x) = number++;
    }
    
    if(rowSize == 1) {
        return;
    }
    
    y = offset + colSize - 1;
    
    for(int idx = 0 ; idx < rowSize - 1 ; idx++) {
        x--;
        *(*(array + y) + x) = number++;
    }
    
    x = offset;
    
    for(int idx = 0 ; idx < colSize - 2 ; idx++) {
        y--;
        *(*(array + y) + x) = number++;
    }
    
    int halfColSize = colSize / 2;
    int halfRowSize = rowSize / 2;
    
    if (halfColSize - offset >= 0 || halfRowSize - offset >= 0) {
        int nextColSize = colSize - 2;
        int nextRowSize = rowSize - 2;

        if(nextColSize < 0) {
            nextColSize = 0;
        }
        
        if(nextRowSize < 0) {
            nextRowSize = 0;
        }
        
        fill_array(nextColSize, nextRowSize, array, number, ++offset);
    }
    
}
