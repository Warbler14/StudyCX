//  Created by kook on 2021/12/29.

#include "executer.h"
#include "struct_example.h"
#include "area_struct.h"
#include "printf_check.h"
#include "print_characters.h"
#include "local_function_value.h"
#include "pointer_check.h"
#include "array_pointer_check.h"
#include "linked_list_check.h"
#include "file_check.h"
#include "string_check.h"
#include "function_check.h"
#include "sort_and_search.h"
#include "snail_array_print.h"
#include "io_check.h"
#include "enum_check.h"
#include "macro_check.h"

int main(int argc, const char * argv[]) {
    
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
    
    return 0;
}
