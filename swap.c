#include<stdio.h>
int main(){
    int first,second,temp;
    printf("Enter the first number : ");
    scanf("%d",&first);
    printf("Enter the second number : ");
    scanf("%d",&second);

    temp = first;    
    first = second;  
    second = temp;

    printf("After swaping the first number you entered is : %d\n",first);
    printf("After swaping the second number you entered is : %d\n",second);

    return 0;
}