#include<stdio.h>
int main(){
    char s[] = { 'N','I','R','A','N','J','A','N','A' };
    char *pointer;
    pointer = s;
    int i;
    for(i=0;i<9;i++){
        printf("The letter %c and its address are %p\n",*pointer,pointer);
        pointer = pointer + 1;
    }
    return 0;
}