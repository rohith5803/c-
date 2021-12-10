#include<stdio.h>
int main(){
    int a,b;
    char choice;
    printf("Enter the math sign to do the operation you need  : ");
    scanf("%c",&choice);
    printf("Enter a and b :");
    scanf("%d %d",&a,&b);
    switch (choice)
    {
    case '+':
        printf("The addition of these two numbers is :%d\n",a+b);
        break;
    case '-':
        printf("The subraction of these two numbers is :%d\n",a-b);
        break;
    case '*':
        printf("The multiplication of these two numbers is :%d\n",a*b);
        break;
    case '/':
        printf("While division the quotient of these two numbers is:%d\n",a/b);
        break;
    case '%' :
        printf("While division the reminder of these two numbers is:%d\n",a%b);
        break;
    
    default:
        printf("Enter the correct choice to do the crazy stuffs\n");
        break;
    }

}