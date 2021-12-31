#include<stdio.h>

int math_tables(int num){
    int i;
    for(i=0;i<=20;i++)
        printf("%d x %d is = %d\n",num,i,i * num);       
}
int main(){
    int number;
    printf("Enter a number to show the math_table of it: ");
    scanf("%d",&number);
    math_tables(number);
    return 0;
}