/* write a c program to print whether the given matrix is lower traingular or not */
#include<stdio.h>
int main ()
{
	int lt[3][3],i,j,flag=1;
	prinntf("\n enter the elements of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&lt[i][j]);
		}
	}
	for(i=0;i<3;i++)
 {
		for(j=0;j<3;j++)
		{
		if ((i<j && lt[i][j]!=0) || (j<=1 && lt[i][j]==0))
		{
			flag=0;
			break;
		}
	  }
 }
 if (flag==1)
	printf("\n the given matrix is lower triangular matrix");
	else
	printf("\n the given matrix is not lower triangular matrix");
}
