#include<stdio.h>
int main(){
    int choice,a,b;
    printf("Enter the choice :");
    scanf("%d",&choice);
    printf("Enter a and b :");
    scanf("%d %d",&a,&b);
    switch (choice)
    {
    case 1:
        printf("The addition of these two numbers is :%d\n",a+b);
        break;
    case 2:
        printf("The subraction of these two numbers is :%d\n",a-b);
        break;
    case 3:
        printf("The multiplication of these two numbers is :%d\n",a*b);
        break;
    case 4:
        printf("While division the quotient of these two numbers is:%d\n",a/b);
        break;
    case 5:
        printf("While division the reminder of these two numbers is:%d\n",a%b);
        break;
    
    default:
        printf("Enter the correct choice to do the crazy stuffs\n");
        break;
    }

}