#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int ns1,ns2,i,j;
	printf("Enter the string 1: ");
	gets(str1);
	printf("Enter the string 2: ");
	gets(str2);
	ns1=strlen(str1);
	ns2=strlen(str2);
	i=ns1;
	j=0;
	while(i<(ns1+ns2))
	{
		while(j<ns2)
		{
			str1[i]=str2[j];
			i++;
			j++;
		}
	}
	str1[ns1+ns2]='\0';
	printf("The concatenated string is %s",str1);
	return 0;
	 
	
}
