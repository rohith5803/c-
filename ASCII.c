// Some people will say that computers only understand  0's and 1's 
//but if you want to see 65 as a number its 65 if you want 65 in a char then its A 
// and we have totaly 128 ASCII values 

#include<stdio.h>
int main(){
int num,input;
printf("Enter a number below or equal to 128 to know the ASCII value: ");
scanf("%d",&input);
for(num = 0;num<=input;num++){
printf("The ASCII: %d = CHAR: %c\n",num,num);
}
return 0;
}

