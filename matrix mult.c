#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
	printf("Enter the elements of Matrix A");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the elements  of matrix B");
	for(i=0;i<r1;i++)
	{
	for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(r2!=c1)
	{
		printf("matrix multiplication is not possible...");
	}
	else
	{
	
	printf("\n the result of matrix C");
	for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
		{
        	c[i][j]=0;
        	for(k=0;k<2;k++)
        	{
        		c[i][j]=c[i][j]+a[i][k]*b[i][k];
			}
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
}
