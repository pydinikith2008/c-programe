/* 3 3 3 3 3
  3 2 2 2 3
 3 2 1 2 3 
3 2 2 2 3
3 3 3 3 3*/
/* write a c  program to print the following pattern */
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,num;
	printf("enter the no of rows ");
	scanf ("%d",&n);
	for(i=-n+1;i<n;i++)
	{
		for ( j=-n+1;j<n;j++)
		{
		num=abs(i)>abs(j)?abs(i):abs(j);
		printf("%d",num+1);
		}	
		printf("\n");
	}
}
