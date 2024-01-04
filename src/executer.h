//
//  executer.h
//  StudyCX
//
//  Created by kook on 2022/05/20.
//

#ifndef executer_h
#define executer_h

#include <stdio.h>
#include <stdlib.h>

struct FunctionInfo {
    char *name;
    void *fp;
};

typedef struct node {
    void* data;
    struct node* next;
} Node;

typedef struct list {
    int size;
    Node* head;
} List;

void execute(void (*fp)(void));


// list execute
List* create_list(void);

void add_to_list(List* list, void* data);

void* get_from_list(List* list, int index);

void* pop_from_list(List* list);

void free_list(List* list);


void select_function_by_function_info_list(List* list);

//deprecated
void select_function(void **fpa, int count);

void select_function_by_function_infos(struct FunctionInfo *fip, int count);

#endif /* executer_h */
