//
//  linked_list_check.h
//  StudyCX
//
//  Created by kook on 2022/06/05.
//

#ifndef linked_list_check_h
#define linked_list_check_h

#include <stdio.h>
#include <stdlib.h>

struct module {
    char *name;
    char *description;
    void *fp;
    struct module *next;
};

typedef struct module MODULE;
typedef MODULE *MODULE_LINK;

void linked_list_check(void);

MODULE_LINK new_module(char *name, char *description, void *fp);

void append_module_first(MODULE_LINK head, MODULE_LINK module);

void print_module_list(MODULE_LINK head);

void free_module_list(MODULE_LINK head);

#endif /* linked_list_check_h */
