/* write a c  program to  print transposition of the given matrix*/
#include<stdio.h>
int main()
{
	int mat[3][3],tmat[3][3],i,j;
	printf("\n enter the elements of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmat[j][i]=mat[i][j];
		}
	}
	printf("\n the transposition of a given matrix is \n");
		for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d",tmat[i][j]);
	
	}
}
printf("\n");

}
