#include<stdio.h>
#include<math.h>
void main()
{
    int i=1,n,x,j,s=0,fact=1;
    printf("the number of elements in series");
    scanf("%d",&n);
    printf("the value of x");
    scanf("%d",&x);
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            fact=fact*(2*(j-1));
            s=s+pow(-1,i-1)*pow(x,2*(i+1))/fact;
        }i++;

    }
    printf("the sum is %d",s);
    }
