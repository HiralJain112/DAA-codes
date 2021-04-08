//Program to perform Merge sort
#include<stdio.h>
#include<conio.h>
void Merge(int A[],int lb,int mid,int ub)
{
    int m,n,L1[100],L2[100],i,j,k;
    m=mid-lb+1;
    n=ub-mid;
    for(i=0;i<m;i++)
    {
      L1[i]=A[lb+i];  
    }
    for(j=0;j<n;j++)
    {
        L2[j]=A[mid+j+1];
    }
    i=0;
    j=0;
    k=lb;
    while(i<m && j<n)
    {
        if(L1[i]<L2[j])
        {
            A[k]=L1[i];
            i++;
            k++;
        }
        else
        {
            A[k]=L2[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        A[k]=L1[i];
        k++;
        i++;
    }
    while(j<n)
    {
        A[k]=L2[j];
        k++;
        j++;
    }
}
void MergeSort(int A[],int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        MergeSort(A,lb,mid);
        MergeSort(A,mid+1,ub);
        Merge(A,lb,mid,ub);
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
    MergeSort(A,0,len-1);
    printf("\nSorted array in Ascending order:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\n",A[i]);
    }
 
}
