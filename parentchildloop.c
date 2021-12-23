#include<stdio.h>
int main(){
    int i=2,j=3;
    for(i=0;i<=2;i++){
        printf("I am from loop parent %d\n",i);
        for(j=0;j<=3;j++){
            printf("I am from loop child %d\n",j);
        }
    }
    return 0;
}
        
