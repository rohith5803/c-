#include<stdio.h>
int main(){
    int number,reminder,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("The number you have entered is %d\n",number);
    while(number!=0){    
     reminder=number%10;    
     reverse=reverse*10+reminder;    
     number=number/10;}
    printf("The number after reverse is %d\n",reverse);
    return 0;
}