#include<stdio.h>
int display();

int main(){
    display();        //after the decleration then im calling the fucntion in main function 
    printf("\n");
    display();        // You can use as function many time as much you wish 
}
int display(){
    int a=5,b=28;
    printf("Hello im the function in c\n");
    printf("The addition of a and b are %d\n",a+b);
}