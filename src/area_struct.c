//
//  area_struct.c
//  StudyCX
//
//  Created by kook on 2022/05/21.
//

#include "area_struct.h"

void rectangle_area_calculation(void){
    
    long area;
    
    struct coordinate {
        int x;
        int y;
    };
    
    struct rectangle {
        struct coordinate topLeft;
        struct coordinate bottomRight;
        
        int length, width;
    };
    
    struct rectangle box;
    
    printf("\nEnter the top left x coordinate: ");
    scanf("%d", &box.topLeft.x);
    
    printf("\nEnter the top left y coordinate: ");
    scanf("%d", &box.topLeft.y);
    
    printf("\nEnter the bottom right x coordinate: ");
    scanf("%d", &box.bottomRight.x);
    
    printf("\nEnter the bottom right y coordinate: ");
    scanf("%d", &box.bottomRight.y);
    
    box.width = box.bottomRight.x - box.topLeft.x;
    box.length = box.bottomRight.y - box.topLeft.y;
    
    area = box.width * box.length;
    
    printf("\nThe area is %ld units.\n", area);
}
