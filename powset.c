#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n;
char set[100];
printf("enter the size of set: ");
scanf("%d",&n);
printf("enter the set elements: ");

for(i=0;i<=n;i++){
    scanf("%s",set[i]);
}

for(i=0;i<pow(2,4);i++)
{
    for(j=0;j<4;j++)
    {
        if(i&(1<<j))
            printf("%s",set[j]);
    }
    printf("\n");
}
}
