#include<stdio.h>
int main()
{
	int array[10],i,j,temp;
	printf("enter any 10 integer numbers");
    for(i=0;i<10;i++)
    scanf("%d",&array[i]);
    for(i=0;i<10-1;i++)
    {
    	for(j=0;j<10-i-1;j++)
    	{
    		if(array[j]>array[j+1])
    		{
			
    		temp=array[j+1];
    		array[j+1]=array[j];
    		array[j]=temp;
    	    }
		}
	}
	printf("\nsorted elements are:\n");
         for(i=0;i<10-1;i++)
		 printf("%d ",array[i]);  
}
