#include <stdio.h> 

int max(int a, int b) 
{ 
	if(a>b)
	{
	    return a;
	}
	else
	{
	    return b;
	}
} 

int knapSack(int W, int wt[], int val[], int n) 
{ 
	int i, w; 
	int K[n + 1][W + 1]; 
	for (i = 0; i <= n; i++) { 
		for (w = 0; w <= W; w++) { 
			if (i == 0 || w == 0) 
				K[i][w] = 0; 
			else if (wt[i - 1] <= w) 
				K[i][w] = max( 
					val[i - 1] + K[i - 1][w - wt[i - 1]], 
					K[i - 1][w]); 
			else
				K[i][w] = K[i - 1][w]; 
		} 
	} 
	return K[n][W]; 
} 

int main() 
{ 
	int n;
	printf("Enter the number of items:");
	scanf("%d",&n);
	int val[n]; 
	int wt[n]; 
	int W;
	printf("\nEnter the values and weights of all the items:");
	for(int i=0;i<n;i++)
	{   printf("\nEnter value for element val[%d]:",i+1);
	    scanf("%d",&val[i]);
	    printf("\twt[%d]:",i+1);
	    scanf("%d",&wt[i]);
	}
	printf("\n\nEnter the maximum capacity of the knapsack:");
	scanf("%d",&W);
	printf("\nMaximum profit:%d", knapSack(W, wt, val, n)); 
	
	return 0; 
} 
