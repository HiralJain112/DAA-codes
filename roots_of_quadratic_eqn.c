#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float x1,x2,d,real,img;
    printf("Enter the coefficient of x^2 i.e. a=");
    scanf("%d",&a);
    printf("Enter the coefficient of x i.e. b=");
    scanf("%d",&b);
    printf("Enter the constant term c=");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if (d > 0) 
    { 
        printf("Roots are real and different \n");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf(" root x1=%f",x1);
        printf(" root x2=%f",x2);
    } 
    else if (d == 0) 
    { 
        printf("Roots are real and same \n"); 
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("\nroot x1=%f",x1);
        printf("\nroot x2=%f",x2);
    } 
    else
    { 
        printf("Roots are complex \n"); 
        real = -b / (2 * a);
        img = sqrt(-d) / (2 * a);
        printf("\nx1 = %.2f+%.2fi\nx2 = %.2f-%.2fi", real, img, real, img);
 
    } 
    return 0;
}

