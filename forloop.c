#include<stdio.h>
int main(){
	int input,number;
    printf("Enter a number : ");
    scanf("%d",&input);
	for(number=1;number<=input;number++)	//for(initialisation;comparision;updation)
	{
		printf("%d\n",number);		//to print the number
	}
	return 0;
}