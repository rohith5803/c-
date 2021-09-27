#include<stdio.h>
int main(){
	int input,num;
	printf("Enter a number : ");   //User will enter a number that number will store in input in scanf
	scanf("%d",&input);
	num = 1;                   	  //initializing the variable
	while(num<=input)	         //while loop with condition           
	{
		printf("%d\n",num);
		num++;		            //incrementing operation         
	}
	return 0;
}