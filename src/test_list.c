//
//  test_list.c
//  StudyCX
//
//  Created by kook on 1/4/24.
//

#include "test_list.h"
#include "executer.h"

void test_list(void) {
    // create a new list
    List* int_list = create_list();
     
    // add some integers to the list
    int x = 42;
    add_to_list(int_list, (void*)&x);
    int y = 13;
    add_to_list(int_list, (void*)&y);
    int z = 99;
    add_to_list(int_list, (void*)&z);
    
    int index = 1;
    int* data = (int*)get_from_list(int_list, index);
    printf("index %d data %d\n", index, *data);
    
    index = 2;
    data = (int*)get_from_list(int_list, index);
    printf("index %d data %d\n", index, *data);
    
    index = 0;
    data = (int*)get_from_list(int_list, index);
    printf("index %d data %d\n", index, *data);
     
    // remove the integers from the list and print them
    int* int_ptr = NULL;
    while ((int_ptr = (int*)pop_from_list(int_list)) != NULL) {
        printf("%d\n", *int_ptr);
    }

    // free the memory used by the list
    free_list(int_list);
}
