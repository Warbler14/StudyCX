//
//  test_execute.c
//  StudyCX
//
//  Created by kook on 1/4/24.
//

#include "test_execute.h"

void test_select_function_by_function_infos(void) {
 
    const int FUNCTION_COUNT = 19;
    
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
        {"linked list test", linked_list_check},
        {"float number export file", float_number_export_file},
        {"write & read file", write_read_file},
        {"string copy", string_check},
        {"function test", function_check},
        {"input data sort and search", sort_and_search},
        {"snail array print", snail_array_print},
        {"io test", io_check},
        {"enum test", enum_check},
        {"macro test", macro_check}
    };
    
    select_function_by_function_infos(functionInfoHolder, FUNCTION_COUNT);
    
}
