//
//  linked_list_check.c
//  StudyCX
//
//  Created by kook on 2022/06/05.
//

#include "linked_list_check.h"

void linked_list_check(void) {
    
    MODULE_LINK head = new_module("head", "head module", NULL);
    
    MODULE_LINK module1 = new_module("module1", "module1", NULL);
    append_module_first(head, module1);
    
    MODULE_LINK module2 = new_module("module2", "module2", NULL);
    append_module_first(head, module2);
    
    print_module_list(head);
    
    free_module_list(head);
}

MODULE_LINK new_module(char *name, char *description, void *fp) {
    MODULE_LINK module = (MODULE_LINK)malloc(sizeof(MODULE));
    if(module == NULL) {
        printf("allocate fail");
        return NULL;
    }
    
    module->name = name;
    module->description = description;
    module->fp = fp;
    module->next = NULL;
    return module;
}

void append_module_first(MODULE_LINK head, MODULE_LINK module) {
    
    if(head == NULL){
        printf("head module is NULL\n");
        return;
    }
    
    if(module == NULL){
        printf("append module is NULL\n");
        return;
    }
    
    if(head->next != NULL) {
        MODULE_LINK head_first_module = head->next;
        head->next = module;
        module->next = head_first_module;
        return;
    }
    
    head->next = module;
    
}

void print_module_list(MODULE_LINK head) {
    MODULE_LINK current = head;
    while(current != NULL) {
        printf("%s, %s\n", current->name, current->description);
        current = current->next;
    }
}

void free_module_list(MODULE_LINK head) {
    MODULE_LINK current = head;
    MODULE_LINK next = NULL;
    
    while(current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
