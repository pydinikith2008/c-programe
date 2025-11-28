#include<stdio.h>
int main()
{
	int arr[5],i,max,min;
	printf("enter 5 elements");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
    min= max = arr[0];
    for (i = 0; i < 5; i++)
	 {
        if (arr[i] > max)
		 {
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    printf(" \n Maximum element is  %d Minimum element is %d ", max,min);
    return 0;
}
