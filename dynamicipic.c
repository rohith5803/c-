#include<stdio.h>
int main(){
    int x;
    float f;
    char c;
    char name[20];
    printf("Enter a decimal number :");
    scanf("%f",&f);
    printf("Enter a charater :");
    scanf("%s",&c); 
    printf("Enter a string :");
    scanf("%s",&name);
    printf("Enter a integer :");
    scanf("%d",&x);

    printf("The integer is = %d\n",x);
    printf("The float value is = %f\n",f);
    printf("The single character is =  %c\n",c);
    printf("The string is = %s\n",name);

    return 0;
}