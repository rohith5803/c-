#include<stdio.h>
#include<stdlib.h>
int main(){
    char s[10];
    int i;
    printf("Enter the string as number:");
    scanf("%s",s);
    i = atoi(s); 
    printf("The string is converted into integer %d\n",i);
    i = i*5;         // this is for verification 
    printf("Then the integer is multiplied with 5 and answer is %d\n",i);
    return 0; 
}