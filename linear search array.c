//linear search
#include<stdio.h>
int main()
{
	int a[10],target,i;
	printf("\n enter any 10 integer numbers");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n enter an element to be searched");
	scanf("%d",&target);
	for(i=0;i<10;i++)
	{
		if ( target==a[i])
        {
        	printf("element is found %d",target);
		}		
	}
	printf("\nelement is not found",target); 
}
