#include<stdio.h>
int main(){
    int divi, num1,num2;
    printf("Enter the first Number : ");
    scanf("%d",&num1);                          // the entered number is storing in the num1 down in the scanf
    printf("Enter the second Number :");
    scanf("%d",&num2);                         // the entered number is storing in the num2 down in the scanf
    divi = num1 / num2;                        // the num1 and the num2 is  dividing by using the / symbol 
    printf("The division of these two numbers is %d\n",divi);
    return 0;
}
