/*
Relational operators
less than:
greater than : >
less than or equal : <=
greater than equal : >=
not equal: != 
both are equal: ==
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("A<B = %d\n",a<b);
    printf("A>B = %d\n",a>b);
    printf("A>=B = %d\n",a>=b);
    printf("A<=B = %d\n",a<=b);
    printf("A!=B = %d\n",a!=b);
    printf("A==B = %d\n",a==b);
    return 0;
}