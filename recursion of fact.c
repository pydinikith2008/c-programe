/* write a c program to find factorial of given number using recursion*/
#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("\n enter positive number");
	scanf("%d",&n); 
	printf("factorial is %d",fact(n));
}
int fact(int x)
{
	if(x==0||x==1)
	return 1;
	else
 return x*fact(x-1);
}
