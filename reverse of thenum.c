/* write a c program to print reverse of the given number*/
#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("enter any positive integer");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num % 10;
		rev=rev * 10+rem;
		num=num/10;
	}
	printf("the reverse of the given number is %d",rev);
}
