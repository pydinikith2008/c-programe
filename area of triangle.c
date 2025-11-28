/*write a c program to print area of triangle*/
#include<stdio.h>
int main()
{
	int l,b,area;
	printf("\nenter length");
	scanf("%d",&l);
	printf("\nenter breadth");
	scanf("%d",&b);
	area= (l* b)/2;
	printf("area of triangle is %d",area);
	
}
