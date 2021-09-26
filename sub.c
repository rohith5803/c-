#include<stdio.h>
int main(){
    int sum, num1,num2;
    printf("Enter the first Number : ");
    scanf("%d",&num1);
    printf("Enter the second Number :");
    scanf("%d",&num2);
    sum = num1 - num2;
    printf("The sum of these two numbers is %d\n",sum);
    return 0;
}