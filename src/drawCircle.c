//
//  drawCircle.c
//  StudyCX
//
//  Created by kook on 2022/07/12.
//

#include "drawCircle.h"

void draw_circle_check(void) {
    
    int gd = DETECT,gm;
    int x ,y ,radius=80;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    /* Initialize center of circle with center of screen */
    x = getmaxx()/2;
    y = getmaxy()/2;

    outtextxy(x-100, 50, "CIRCLE Using Graphics in C");
    /* Draw circle on screen */
    circle(x, y, radius);

    getch();
    closegraph();
}
