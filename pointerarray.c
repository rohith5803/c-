#include<stdio.h>
int main(){
    int a[] = {12,13,14,15,16};
    int i,*pointer;
    pointer = a;
    for(i=0;i<5;i++){
        printf("The number %d and its address %p\n",*pointer,pointer);
        pointer = pointer + 1;
    }
    return 0;

}