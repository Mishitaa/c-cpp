#include<stdio.h>
void main()
{
    int i=1,j,n,x,s=0,fact=1;
    printf("the number of elements in series");
    scanf("%d",&n);
    printf("the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           fact=fact*j;
           s=s+pow(x,i)/fact;
       }
       printf("the sum of series is %d",s);

    }
}
