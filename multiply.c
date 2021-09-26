#include<stdio.h>
int main(){
    int sum, num1,num2;
    printf("Enter the first Number : ");
    scanf("%d",&num1);                          // the entered number is storing in the num1 down in the scanf
    printf("Enter the second Number :");
    scanf("%d",&num2);                         // the entered number is storing in the num2 down in the scanf
    sum = num1 * num2;                        // the num1 and the num2 is multiplying by using the * symbol 
    printf("The product of these two numbers is %d\n",sum);
    return 0;
}