//
//  sort_and_search.c
//  StudyCX
//
//  Created by kook on 2022/07/23.
//

#include "sort_and_search.h"

void sort_and_search(void) {
    
    int MAX = 20;
    int MAX_RAND = 1000;
    
    int arr[MAX], count, key, *ptr;
    int arrSize = sizeof(arr[0]);
    
    /*
    printf("Enter %d integer values; press Enter after each.\n", MAX);
    
    for(count = 0 ; count < MAX ; count++) {
        scanf("%d", &arr[count]);
    }
    
    printf("Press Enter to sort the values");
    
    getc(stdin);
    */
    
    for(count = 0 ; count < MAX ; count++) {
        arr[count] = rand() % MAX_RAND;
    }
    
    printArr(arr, MAX);
    
    qsort(arr, MAX, arrSize, intcmp);
    
    printArr(arr, MAX);
    
    printf("\nEnter a value to search for:");
    scanf("%d", &key);
    
    ptr = (int *)bsearch(&key, arr, MAX, arrSize, intcmp);
    
    if (ptr != NULL) {
        printf("\n%d found at arr[%d].", key, (int)(ptr - arr));
    } else {
        printf("\n%d not found.", key);
    }
    
    printf("\n");
}

int intcmp(const void *v1, const void *v2) {
    return (*(int *)v1 - *(int *)v2);
}

void printArr(int *arr, int arrSize) {
    printf("----- print array start -----\n");
    for(int count = 0 ; count < arrSize ; count++) {
        int position = count % 10;
        if(count == 0) {
            printf("%4d", arr[count]);
        } else if(position == 0 && count > 0) {
            printf("\n%4d", arr[count]);
        } else if(position > 0) {
            printf(", %4d", arr[count]);
        }
    }
    printf("\n----- print array end -----\n");
}
