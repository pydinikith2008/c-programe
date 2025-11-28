/*write a c program to find number of owels and nomber of consents and digits and number of spaces in a given sentance*/
#include<stdio.h>
int main()
{
	char sen[20];
	int v=0,c=0,d=0,s=0,i;
	printf("\n enter the sentence");
	scanf("%[^\n]",sen);
	
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]=='a'|| sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u')
		v++;
		else if (sen[i]>='a' && sen[i]<='z')
		c++;
		else if (sen[i]>='0' && sen[i]<='9')
		d++;
		else if (sen[i]==' ')
		s++;
	}
	printf(" vowels %d,constants %d,digits %d,spaces %d",v,c,d,s);
}
