#include<stdio.h>
int main(){
    //There are 4 Data types in C 
    int intType;
    float floatType;
    double doubleType;
    char charType;
    
    printf("The size of int: %ld bytes\n",sizeof(intType));
    printf("The size of float: %ld bytes\n",sizeof(floatType));
    printf("The size of double: %ld bytes\n",sizeof(doubleType));
    printf("The size of char: %ld bytes\n",sizeof(charType));

    return 0;
}