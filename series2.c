#include<stdio.h>
void main()
{
 int i,n,s=0,fact=1;
 printf("enter number elements of series");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     fact=fact*i;
     s=s+fact/i;
 }
 printf("the sum is %d",s);
}
