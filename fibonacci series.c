/* write ac program to print fibonacci series*/
#include<stdio.h>
int main()
{
	int a=1,b=1,c,i,n;
	printf("enter any positive integer");
	scanf("%d",&n);
	
	printf("%d  %d",a,b);
	
	for(i=2;i<n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		printf("   %d",c);
	}
}
