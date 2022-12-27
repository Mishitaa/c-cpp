#include<stdio.h>
void main()
{
    int i, j, a[3][3], b[3][3], c[3][3];
    printf("enter the elements of array A: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements of array B: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the multiplied matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
             for(int k=0;k<3;k++){
         c[i][j]= c[i][j]+ (a[i][k]*b[k][j]);
        }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
