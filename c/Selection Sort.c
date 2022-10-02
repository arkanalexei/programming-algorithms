#include <stdio.h>
void SelectionSort(int a[],int n)
{
    int i,j,min,temp,min_i;
    for (i=0;i<n;i++)
    {   
        min=a[i];
        min_i=i;
        for(j=i+1;j<n;j++)
        {
            if (min>a[j])
            {
                min=a[j];
                min_i=j;
            }
            
        }
    temp=a[min_i];
    a[min_i]=a[i];
    a[i]=temp;
    
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int i=0,n,a[100],ans[100];
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for (i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    printf("The sorted array is ");
    SelectionSort(a,n);
   
}
