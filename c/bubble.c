#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the %d th element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Elements before sorting: ");
	for (i=0;i<n;i++)
	{
		printf(" %d , ",a[i]);
		
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
		
	}
	printf("Elements after sorting: ");
	for (i=0;i<n;i++)
	{
		printf(" %d , ",a[i]);
		
	}
	return 0;
}	
