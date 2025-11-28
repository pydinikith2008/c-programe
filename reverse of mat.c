#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter elements in the array\n");
    scanf("%d",&n);
    
	int array[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++) 
	{
        scanf("%d",&array[i]);
    }
    printf("The array in reverse order is\n");
    for(i=n-1;i>=0;i--) 
	{
        printf("%d ",array[i]);
    }
	printf("\n");
}
