//Addition of all elements of a matrix
#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    int ar[100][100],i,j,sum=0;
    printf("\nEnter the number of rows in the matrix:");
    scanf("%d",&m);
    printf("\nEnter the number of columns in the matrix:");
    scanf("%d",&n);
    printf("\nEnter the elements in the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
            sum=sum+ar[i][j];
        }
        printf("\n");
    }
    printf("\nsum: %d",sum);
    return 0;
}
