#include<stdio.h>
int main()
{
	int n,i,se,temp=0;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	
	int a[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the %d th element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the search elements: \n");
	scanf("%d",&se);
	for (i=0;i<n;i++)
	{
		if (se == a[i])
		temp++;
		

	}
	if (temp != 0)
		printf("%d is found ",se);
	else
		printf("%d is not found",se);
	
	return 0;
}	
