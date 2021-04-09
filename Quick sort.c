//Program to perform Quick sort
#include<stdio.h>
#include<conio.h>
int QS_partition(int A[],int lb,int ub)
{
    int pivot,i,j,temp;
    pivot=A[lb];
    i=lb;j=ub;
    while(i<j)
    {
        while(A[i]<pivot)
        {
            i++;
        }
        while(A[j]>=pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;
        }
    }
    temp=A[j];
    A[j]=A[lb];
    A[lb]=temp;
    return j;
}
void QuickSort(int A[],int lb, int ub)
{
    int k;
    if(lb<ub)
    {
        k=QS_partition(A,lb,ub);
        QuickSort(A,lb,k);
        QuickSort(A,k+1,ub);
    }
}
void main()
{
    int A[100],len,i,j,temp;
    printf("Enter the number of elements you want in the array:");
    scanf("%d",&len);
    printf("\nEnter the elements in the array:\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&A[i]);
    }
    QuickSort(A,0,len-1);
    printf("\nSorted array in Ascending order:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\n",A[i]);
    }
 
}
