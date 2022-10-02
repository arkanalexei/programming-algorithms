#include<stdio.h>
void InsertionSort(int n,int a[])
{
    int i,j,temp;
    for (i=1;i<n;i++)
    {
        j=i-1;
        temp=a[i];
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
    printf("Enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    printf("The sorted array is ");
    insertionSort(a,n);
   
}
