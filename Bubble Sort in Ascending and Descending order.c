//programforBubbleSortinAscendingOrderAndDescendingOrder
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100],n,i,j,temp;
    printf("Enter the number of elements you want in the array:");
    scanf("%d",&n);
    printf("\nEnter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted array in Ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted array in Descending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
