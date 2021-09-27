// TO print all the natural number till n 

#include<stdio.h>
int main(){
    int number,i;
    printf("Enter a number : ");
    scanf("%d",&number);
    for(i = 1; i<=number; i++){
        printf("%d is a natural number\n",i);
    }
    return 0;
}