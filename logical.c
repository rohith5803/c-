#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a zero and non zero to know about logical operators\n");

    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("AND op a&&b = %d\n",a&&b);
    printf("OR op  a||b = %d\n",a||b);
    printf("NOT op !(a<b)= %d\n",!(a<b));
    return 0;
}