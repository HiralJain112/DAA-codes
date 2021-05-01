#include<stdio.h>
#include<conio.h>
#include<math.h>
int derivative(int ar[],int n,int x)
{
    int result=0;
    for(int i=n;i>=0;i--)
    {
        result=result+(ar[i]*i*pow(x,i-1));
    }
    return result;
}
int main()
{
    int n,i,ar[100],x,val=0,dv;
    printf("\nEnter the degree of the polynomial:");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        printf("\nEnter the coeff. of x^%d :",i);
        scanf("%d",&ar[i]);
    }
    printf("\nYour polynomial is f(x)= \n");
    for (i = n; i>=0 ; i--)
    {
        if (ar[i] > 0)
            printf(" + ");
        else if (ar[i] < 0)
            printf(" - ");
        else
            printf(" ");
        printf("%dx^%d  ",ar[i],i);
    }
    printf("\nEnter the value of x for which you want to evaluate the polynomial and find the derivative, x= ");
    scanf("%d",&x);
    for (i = n; i>=0; i--)
    {
        val = val * x + ar[i];
    }
    printf("\n At x= %d , f(x)=%d",x,val);
    dv=derivative(ar,n,x);
    printf("\nDerivative of f(x) at x=%d is %d",x,dv);
    return 0;
}
