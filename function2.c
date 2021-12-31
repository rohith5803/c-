#include<stdio.h>
int addition(){
    int a,b;
    printf("Enter any two value : ");
    scanf("%d %d",&a,&b);
    return a+b;
}

int main(){
    printf("The sum of these two values are :%d\n",addition());
    return 0;
}