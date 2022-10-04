#include<stdio.h>

int insert(int arr[],int n,int size)
{
    int i,loc,item;
    if(n==size)
    {
        printf("Array is full.");
        printf("\n");
    }
    else
    {
        printf("Enter the location(Index) and the element to insert: ");
        scanf("%d%d",&loc,&item);
        printf("\n");
        for (i=n-1;i>=loc;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[loc]=item;
        n=n+1; 
           
    }
return n;
}

int delete(int arr[],int n)
{
    int flag,item,i,j;
    flag=0;
    printf("Enter the item: ");
    scanf("%d",&item);
    printf("\n");
    for (i=0;i<n;i++)
    {
        if (arr[i]==item)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Item not found.");
        printf("\n");
    }
    else
    {
        for (j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
        n=n-1;
    }
return n;
}

void display(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\n");
        printf("%d\t",arr[i]);
        printf("\n");
    }
}

int main()
{
    int arr[20],i,op,n,flag=1,size;
    size=20;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("Enter the element arr[%d] :: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    while (flag==1)
    {   
        printf("\n"); 
        printf("Enter 1 for insertion\nEnter 2 for deletion\nEnter 3 to display\nEnter 4 to exit");
        printf("\nEnter your option:: ");
        scanf("%d",&op);
        printf("\n");

        if (op==1)
        {
            n=insert(arr,n,size);
        }
        else if (op==2)
        {
            n=delete(arr,n);
        }
        else if (op==3)
        {
            display(arr,n);
        }
        else if (op==4)
        {
            flag=2;
            break;
        }
        else
        {
            printf("Enter a valid option.");
            printf("\n");
        }
    }
    
return 0;
}

