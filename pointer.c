#include<stdio.h>
int main(){
    int a = 10;
    int *pointer;
    pointer = &a;
    printf("The value of the a before making a change in pointer: %d\n",a);
    *pointer = *pointer+ 20;
    printf("The value of a after changing in the pointer: %d\n",*pointer);
    printf("The value of a now: %d\n",a);
    return 0;

}