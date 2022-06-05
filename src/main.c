//  Created by kook on 2021/12/29.

#include "struct_example.h"
#include "executer.h"
#include "area_struct.h"
#include "printf_check.h"
#include "print_characters.h"
#include "local_function_value.h"
#include "pointer_check.h"
#include "array_pointer_check.h"
#include "linked_list_check.h"

int main(int argc, const char * argv[]) {
    
    const int FUNCTION_COUNT = 10;
    
    struct FunctionInfo functionInfoHolder[FUNCTION_COUNT] = {
        {"simple print test", test},
        {"print checkout", print_checkout},
        {"simple struct print test", struct_test},
        {"print caracters", print_caracters},
        {"rectangle area calculation", rectangle_area_calculation},
        {"static function test", local_function_start},
        {"test register variable", register_variable_time_check},
        {"test pointer", pointer_checkout},
        {"test array pointer", array_pointer_checkout},
        {"linked list test", linked_list_check}
    };
    
    select_function_by_function_infos(functionInfoHolder, FUNCTION_COUNT);
    
    return 0;
}
