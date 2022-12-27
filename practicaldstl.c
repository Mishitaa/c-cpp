#include<stdio.h>
void main()
{
    int i,j,n,m,k=0,f=0,a[100],b[100],c[100];
    printf("enter no of elements in seta:");
    scanf("%d",&m);
    printf("enter elements of seta:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no of elements in setb:");
    scanf("%d",&n);
    printf("enter elements of setb:");
    for(i=0;i<n;i++)
    {
        scanf("%d",b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i]==b[j])
           {

            f=1;
            break;

        }

    else{f=0;}}
    if(f==0){
        c[k]=a[i];
        k++;
    }
    printf("the difference of set a&b:\n");
    for(i=0;i<k;i++){
        printf("%d",c[i]);
    }

}}

