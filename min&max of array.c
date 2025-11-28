/*write a c program minimum and maximum of elements*/
#include<stdio.h>
int main()
{
	int a[10],i,min,max,n;
	printf("\n enter the size of the array");
	scanf("%d",&n);
		printf("\n enter the elements");
		for(i=0;i<n;i++)
		scanf("%d,&a[i]");
		min=a[0];
		max=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
		}
	printf("\n min and max elements are %d %d",min,max);	
}
