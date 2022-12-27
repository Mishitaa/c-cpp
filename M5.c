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
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[j][i] = a[i][j];
                    }
    }
printf("the transpose of the matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

