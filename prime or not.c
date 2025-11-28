/* wite a c program to print wheteher the given number is prime or not*/
#include<stdio.h>
int main()
{
	int num,count,i;
	printf("enter any positive number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	
	}
	if(count==2)
	printf("the give number is prime is%d",num);
	else
		printf("the give number is not prime is%d",num);
}
