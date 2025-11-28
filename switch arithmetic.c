#include<stdio.h>
int main()
{
	char op;
	int n1,n2,result ;
	printf("enter any arithmetic operator");
	scanf("%c",&op);
	printf("enter any two integer numbers");
	scanf("%d",&n1,&n2);
	switch(op)
	{
		 case '+':
			        result=n1+n2;
		       	printf(" \nthe addition is %d",result);
			          break;
	     case'-':
				   result=n1-n2;
				   printf("\n the substraction is %d",result);
				    break;
        default :
        	printf(" %d invalid ",result);
}      
return 0;
}

