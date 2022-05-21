//  Created by kook on 2021/12/29.

#include "executer.h"
#include "area_struct.h"
#include "printf_check.h"
#include "print_characters.h"
#include "test.h"

int main(int argc, const char * argv[]) {
    
    const int FUNCTION_COUNT = 4;
    void *fpa[FUNCTION_COUNT] = {};
    
    fpa[0] = test;
    fpa[1] = printCheckout;
    fpa[2] = printCaracters;
    fpa[3] = rectangleAreaCalculation;
    
    //executer(fpa[0]);
    selectFunction(fpa, 4);
    
    return 0;
}
