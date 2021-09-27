#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c,k=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("NO.%d\t%d\n",k,a);    
    printf("NO.%d\t%d\n",k+1,b);    

    for(i=3;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
        printf("NO.%d\t%d\n",i,c);
    }
    return 0;
}