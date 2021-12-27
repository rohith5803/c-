#include<stdio.h>
int main(){
    char alp[50];
    int a;
    printf("Enter a value:");
    scanf("%d",&a);
    sprintf(alp,"%d",a);
    printf("the given interger in string:%s",alp);

    return 0;
}