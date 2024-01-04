//
//  executer.c
//  StudyCX
//
//  Created by kook on 2022/05/20.
//
#include "executer.h"

const char *END_MESSAGE = "- end of line -";

void execute(void (*fp)(void)){
    fp();
}

List* create_list(void) {
    List* new_list = (List*)malloc(sizeof(List));
    new_list->size = 0;
    new_list->head = NULL;
    return new_list;
}

void add_to_list(List* list, void* data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}

void* get_from_list(List* list, int index) {
    if(list->size == 0) {
        return NULL;
    }
    if(index < 0) {
        return NULL;
    }

    int target = list->size - index - 1;
    Node* current_node = list->head;
    for(int position = 0 ; position < list->size ; position++) {
        if(position == target) {
            return current_node->data;
        }
        current_node = current_node->next;
    }
    return NULL;
}

void* pop_from_list(List* list) {
    if(list->size == 0) {
        return NULL;
    }
    Node* node_to_remote = list->head;
    void* data = node_to_remote->data;
    list->head = node_to_remote->next;
    free(node_to_remote);
    list->size--;
    return data;
}

void free_list(List* list) {
    Node* current_node = list->head;
    while(current_node != NULL) {
        Node* next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }
    free(list);
}

void select_function_by_function_info_list(List* list) {
    
    printf("------- functions ------\n");
    Node* current_node = list->head;
    for(int position = 0 ; position < list->size ; position++) {
        struct FunctionInfo* functionInfo = current_node->data;
        printf("%3d - %s\n", position, functionInfo->name);
        current_node = current_node->next;
    }
    printf("-------------------------\n");
    
    int functionNumber = list->size - 1;
    void *fp = NULL;
    
    printf("input function number 0~%d: ", list->size - 1);
    scanf("%d", &functionNumber);
    fflush(stdin);

    if(functionNumber < list->size) {
        struct FunctionInfo* functionInfo = get_from_list(list, functionNumber) ;
        fp = functionInfo->fp;
    } else {
        printf("funciton not found\n");
    }
    
    if(fp != NULL) {
        execute(fp);
    }
    
    printf("%s\n", END_MESSAGE);
    
}

//deprecated
void select_function(void **fpa, int count){
    
    int functionNumber;
    void (*fp) = NULL;
    
    printf("input function number 0~%d: ", count-1);
    scanf("%d", &functionNumber);
    
    if(functionNumber < count) {
        fp = fpa[functionNumber];
    } else {
        printf("funciton not found\n");
    }
    
    if(fp != NULL) {
        execute(fp);
    }
    
    printf("%s\n", END_MESSAGE);
}

void select_function_by_function_infos(struct FunctionInfo *fip, int count) {
    
    printf("------- functions ------\n");
    for(int idx = 0; idx < count ; idx++) {
        struct FunctionInfo functionInfo = fip[idx];
        printf("%3d - %s\n", idx, functionInfo.name);
    }
    printf("-------------------------\n");
    
    int functionNumber = count - 1;
    void (*fp) = NULL;
    
    printf("input function number 0~%d: ", count-1);
    scanf("%d", &functionNumber);
    fflush(stdin);
    
    if(functionNumber < count) {
        struct FunctionInfo functionInfo = fip[functionNumber];
        fp = functionInfo.fp;
    } else {
        printf("funciton not found\n");
    }
    
    if(fp != NULL) {
        execute(fp);
    }
    
    printf("%s\n", END_MESSAGE);
}
