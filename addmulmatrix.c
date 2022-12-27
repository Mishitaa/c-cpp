#include<stdio.h>
int main()
{
 int m,n,c,i,d,r,j,mul[10][10],k,a,b,first[10][10], second[10][10], sum[10][10];
 printf("Enter the number of rows and columns of matrix\n");
 scanf("%d%d", & m, & n);
 printf("Enter the elements of first matrix\n");
 for (c = 0; c < m; c++)
 for (d = 0; d < n; d++) scanf("%d", & first[c][d]);
 printf("Enter the elements of second matrix\n");
 for (c = 0; c < m; c++)
 for (d = 0; d < n; d++) scanf("%d", & second[c][d]);
 printf("Sum of entered matrices:-\n");
 for (c = 0; c < m; c++)
 {
 for (d = 0; d < n; d++)
 {
 sum[c][d] = first[c][d] + second[c][d];
 printf("%d\t", sum[c][d]);
 }
 printf("\n");
 } printf("multiply of the matrix=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
 mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
 return 0;
}
