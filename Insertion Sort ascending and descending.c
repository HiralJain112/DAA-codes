#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100],n,i,j,temp,gap;
    printf("Enter the number of elements you want in the array:");
    scanf("%d",&n);
    printf("\nEnter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (gap = n/2; gap > 0; gap /= 2) 
    { 
        for (i = gap; i < n; i += 1) 
        { 
            temp = arr[i]; 
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
            arr[j] = temp; 
        } 
    } 
    printf("\nSorted array in Ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for (gap = n/2; gap > 0; gap /= 2) 
    { 
        for (i = gap; i < n; i += 1) 
        { 
            temp = arr[i]; 
            for (j = i; j >= gap && arr[j - gap] < temp; j -= gap) 
                arr[j] = arr[j - gap]; 
            arr[j] = temp; 
        } 
    } 
    
    printf("\nSorted array in Descending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}

