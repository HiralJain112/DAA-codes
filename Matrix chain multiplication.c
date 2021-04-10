#include <limits.h>
#include <stdio.h>

// Matrix Ai has dimension d[i-1] x d[i] for i = 1..n
int MatrixChainOrder(int d[], int n)
{

	int m[n][n];
	int i, j, k, L, q;
	for (i = 1; i < n; i++)
		m[i][i] = 0;

	// L is chain length.
	for (L = 2; L < n; L++) {
		for (i = 1; i < n - L + 1; i++) 
		{
			j = i + L - 1;
			m[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++) 
			{
				// q = cost/scalar multiplications
				q = m[i][k] + m[k + 1][j]
					+ d[i - 1] * d[k] * d[j];
				if (q < m[i][j])
					m[i][j] = q;
			}
		}
	}

	return m[1][n - 1];
}

int main()
{
    int len;
    printf("Enter number of matrices:");
    scanf("%d",&len);
	int dim[len+1] ;
	printf("\nEnter the dimensions:");
	for(int i=0;i<=len;i++)
	{
	    scanf("%d",&dim[i]);
	}
	printf("Minimum number of multiplications is %d ",
		MatrixChainOrder(dim,len+1));

	getchar();
	return 0;
}
