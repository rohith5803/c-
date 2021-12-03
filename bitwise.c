#include<stdio.h>
int main(){
    int a,b,c=4;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b); 
    printf("Bitwise for AND (a&b) :%d\n",a&b);
    printf("Bitwise for OR (a|b)  :%d\n",a|b);
    printf("Bitwise for XOR (a^b) :%d\n",a^b);
    printf("Left shift operator :%d\n",c<<7);    
    printf("Right shift operator :%d\n",c>>1);    

    return 0;
}