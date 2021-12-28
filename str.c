#include<stdio.h>
int main(){
    struct point
    {                    // syntax of the structure 
         int x,y;
    };

    struct point p1,p2,p3;
    p1.x = 10;
    p1.y = 20;
    p2.x = 100;
    p2.y = 200;
    p3.x = p1.x + p1.y;
    p3.y = p2.x +p2.y;
    printf("The sum of these are %d  %d\n",p3.x,p3.y);

    return 0;
}