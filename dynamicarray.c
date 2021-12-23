#include<stdio.h>
int main(){
    int a[3][3],row,column;
    printf("Enter the matrix value:\n");
    for(row=0;row<3;row++){
        for(column=0;column<3;column++){
            scanf("%d",&a[row][column]);
        }
    }
    printf("The given values are:\n");
    for(row=0;row<3;row++){
        for(column=0;column<3;column++){  
          printf("%d\t",a[row][column]);
        }
        printf("\n");
    }
    return 0;
}